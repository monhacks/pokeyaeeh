# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_3, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"

# 10 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"

# 13 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieYouHaveThwartedMyPlans, MSGBOX_DEFAULT
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceUp
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 88 "data/maps/MagmaHideout_4F/scripts.pory"

# 89 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 101 "data/maps/MagmaHideout_4F/scripts.pory"

# 102 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 106 "data/maps/MagmaHideout_4F/scripts.pory"

# 107 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 120 "data/maps/MagmaHideout_4F/scripts.pory"

# 121 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 125 "data/maps/MagmaHideout_4F/scripts.pory"

# 126 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 130 "data/maps/MagmaHideout_4F/scripts.pory"

# 131 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 135 "data/maps/MagmaHideout_4F/scripts.pory"

# 136 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 140 "data/maps/MagmaHideout_4F/scripts.pory"

# 141 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Courtney::
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MAGMA_HIDEOUT, MagmaHideout_4F_Text_CourtneyIntro, MagmaHideout_4F_Text_CourtneyDefeat
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 145 "data/maps/MagmaHideout_4F/scripts.pory"

# 146 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see Groudon, too, but they\n"
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about Groudon!$"
# 152 "data/maps/MagmaHideout_4F/scripts.pory"

# 153 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 156 "data/maps/MagmaHideout_4F/scripts.pory"

# 157 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if Groudon even has a tail?$"
# 159 "data/maps/MagmaHideout_4F/scripts.pory"

# 160 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 164 "data/maps/MagmaHideout_4F/scripts.pory"

# 165 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"

# 169 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie, sir!\n"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"

# 173 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 176 "data/maps/MagmaHideout_4F/scripts.pory"

# 177 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 179 "data/maps/MagmaHideout_4F/scripts.pory"

# 180 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"

# 183 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyIntro:
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Stop right there, {PLAYER}!\p"
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You have crossed us for the last\n"
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "time!$"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"

# 188 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyDefeat:
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ahhh! Not again!$"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"

# 191 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyPostBattle:
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I was able to stall you!\p"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie is close to awaken that thing…$"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"

# 195 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, Groudon is sleeping!\p"
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie went to Groudon just seconds\n"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 204 "data/maps/MagmaHideout_4F/scripts.pory"

# 205 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie should have awakened Groudon…$"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"

# 213 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon…\p"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Red Orb is what you sought.\n"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Red Orb.\n"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 223 "data/maps/MagmaHideout_4F/scripts.pory"

# 224 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon!\n"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the Red Orb the key?\p"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon!\n"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"

# 231 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieYouHaveThwartedMyPlans:
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: You have thwarted my plans for\n"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "for the last time, {PLAYER}!\p"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Now get ready for the full power of\n"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon!$"
# 236 "data/maps/MagmaHideout_4F/scripts.pory"

# 237 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pokémon?$"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"

# 241 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: There has to be some reason\n"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why Groudon fled…\p"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With Groudon gone, there is no longer\n"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after Groudon, so this\n"
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"
