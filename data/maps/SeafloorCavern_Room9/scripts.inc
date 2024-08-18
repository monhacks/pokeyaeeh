# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Shelly::
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ShellyIntro, SeafloorCavern_Room9_Text_ShellyDefeat
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceRight
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ArchieDefeat
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyIntro:
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ahahahaha!\p"
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "How did you manage to get here without\n"
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "a submarine?\l"
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What an impressive child!\p"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… It won't do to have you\n"
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "meddling about here.\p"
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "And, I do want payback for what\n"
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "happened at the Weather Institute…\p"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I'm going to give you a little taste\n"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "of pain! Resign yourself to it!$"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyDefeat:
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ahahahaha!\p"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ouch!$"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyPostBattle:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ahahahaha!\n"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You're so darn strong.\p"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's terribly disappointing that you're\n"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "not a Team Aqua member.\p"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You could have enjoyed the fabulous\n"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world our Boss has promised as\l"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "one of us…$"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hold it right there.$"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\n"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon Kyogre!\p"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: It surprises me, how you've\n"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\p"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Blue Orb, I should be able\n"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "control Kyogre!$"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb suddenly began shining\n"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the Blue Orb…\p"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did Kyogre go?$"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from our\n"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened Kyogre,\l"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize Team Aqua's vision of\l"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: There's something wrong…\p"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb is supposed to awaken\n"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control Kyogre…\p"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did Kyogre disappear?\p"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie… You've finally awoken Kyogre,\n"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, Team Magma, that\n"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated Groudon?\p"
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this Blue Orb,\n"
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control Kyogre…\p"
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
