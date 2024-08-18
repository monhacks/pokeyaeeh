# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveformchangeitems
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_HM02
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? Prof. Birch?\p"
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof's away on fieldwork.\n"
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch is studying the habitats\n"
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of Pokémon.\p"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof enjoys {RIVAL}'s help, too.\n"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: So, {PLAYER}{KUN}.\p"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own Pokémon yet.\p"
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the Pokémon you\l"
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: While you're at it, why not\n"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: If you work at Pokémon\n"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good Trainer.\p"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon while helping me out.\p"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Great!\n"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a Trainer.$"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, don't be that way.\n"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: {RIVAL}?\n"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your Pokémon get tired,\n"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, hi, {PLAYER}{KUN}!\p"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a Trainer already.\p"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this Pokédex.$"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The Pokédex is a high-tech\n"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any Pokémon you meet or catch.\p"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare Pokémon\n"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the Pokédex,\l"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Countless Pokémon\n"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, wow, {PLAYER}{KUN}!\n"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a Pokédex, too!\p"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: It's fun if you can get a lot of\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon!\p"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different Pokémon.\p"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute Pokémon, I'll catch\n"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with Poké Balls!$"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your Bag's full.$"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I wonder where I should go look\n"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for Pokémon next?$"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Huh…\n"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a Pokédex, too.\p"
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: You know it's more fun to\n"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of Pokémon.\p"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different Pokémon.\p"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool Pokémon, you bet\n"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with Poké Balls.$"
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your Bag's full.$"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Where should I look for\n"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next…$"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof must use this for research.$"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Now…\p"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study Pokémon.\p"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have recently come in acquisition of\n"
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a few rare artifacts from a few old\l"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "colleagues of mine.\p"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "These items can change the form of\n"
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "certain when held on used upon.\p"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh no, don't worry. If you misplace any,\n"
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you can just buy it from the League!\p"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "A few of these items are easy to find\n"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in other regions, so they are exporting\l"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them to other regions as jewelry.\p" @ idk what to write, its 2am :/
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let me get them, one sec.$"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Eheheh!\p"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even I am\n"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "getting the items!\p"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You became the Champion, before I could\n"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "get my 7th badge, {PLAYER}!$"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Haha, you're getting these\n"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "artifacts because I asked Dad to\l"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "get them for us!\p"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm glad we both can use them!\p"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Okay, got it!$"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received some rare items!$"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: But listen.\n"
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the Champion,\l"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I think I'll take a short break\n"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the Prof here for\n"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: For the time being,\n"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the Prof here\n"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, {PLAYER}{KUN}!\n"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your Pokédex.\p"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the Hoenn\n"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's Pokédex.\p"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare Pokémon only found\n"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: These are rare Pokémon\n"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The Fire Pokémon\n"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Cyndaquil caught your eye!\p"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the Cyndaquil is your choice?$"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The Water Pokémon\n"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Totodile is your choice!\p"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the Totodile?$"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The Grass Pokémon\n"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Chikorita is your choice!\p"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the Chikorita?$"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Take your time before\n"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable Pokémon.$"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: I see!\n"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine Pokémon!$"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from Prof. Birch!$"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Listen, {PLAYER}{KUN}.\n"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the Hoenn Pokédex,\l"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this Pokémon.$"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: {PLAYER}{KUN}, after this…\n"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Pokédex?\p"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the Prof.$"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Rather than collecting\n"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon, I prefer slowly and \l"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\n"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Hey, {PLAYER}!\n"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Scott: Hi, hi, {PLAYER}!\n"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, Scott.\p"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. Tidal now.\n"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either Slateport or Lilycove.\p"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"
