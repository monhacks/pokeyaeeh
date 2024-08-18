# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
.set LOCALID_NPC1, 11
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
.set LOCALID_NPC2, 10
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
.set LOCALID_NPC3, 9
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_OLIVIA
# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call_if TRUE, SootopolisCity_Gym_1_OliviaPos
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_BRIANNA
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call_if TRUE, SootopolisCity_Gym_1_BriannaPos
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_BETHANY
# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call_if TRUE, SootopolisCity_Gym_1_BethanyPos
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_OnTransition
# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1_OliviaPos::
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setobjectxyperm LOCALID_NPC1, 7, 17
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1_BriannaPos::
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setobjectxyperm LOCALID_NPC2, 7, 12
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1_BethanyPos::
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setobjectxyperm LOCALID_NPC3, 7, 7
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
    setflag B_FLAG_NO_BAG_USE
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 7
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_KNOCK_OFF
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_KNOCK_OFF
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Andrea::
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_ANDREA, SootopolisCity_Gym_1F_Text_AndreaIntro, SootopolisCity_Gym_1F_Text_AndreaDefeat
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Crissy::
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_CRISSY, SootopolisCity_Gym_1F_Text_CrissyIntro, SootopolisCity_Gym_1F_Text_CrissyDefeat
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Olivia::
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_OLIVIA, SootopolisCity_Gym_1F_Text_OliviaIntro, SootopolisCity_Gym_1F_Text_OliviaDefeat, SootopolisCity_Gym_1F_EventScript_OliviaDefeated
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OliviaDefeated::
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_NPC1, SootopolisCity_Gym_1F_Movement_MoveUpLeft
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Connie::
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_CONNIE, SootopolisCity_Gym_1F_Text_ConnieIntro, SootopolisCity_Gym_1F_Text_ConnieDefeat
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Bridget::
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_BRIDGET, SootopolisCity_Gym_1F_Text_BridgetIntro, SootopolisCity_Gym_1F_Text_BridgetDefeat
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Brianna::
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_BRIANNA, SootopolisCity_Gym_1F_Text_BriannaIntro, SootopolisCity_Gym_1F_Text_BriannaDefeat, SootopolisCity_Gym_1F_EventScript_BriannaDefeated
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_BriannaDefeated::
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_NPC2, SootopolisCity_Gym_1F_Movement_MoveUpLeft
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Tiffany::
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_TIFFANY, SootopolisCity_Gym_1F_Text_TiffanyIntro, SootopolisCity_Gym_1F_Text_TiffanyDefeat
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Daphne::
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_DAPHNE, SootopolisCity_Gym_1F_Text_DaphneIntro, SootopolisCity_Gym_1F_Text_DaphneDefeat
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Bethany::
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_BETHANY, SootopolisCity_Gym_1F_Text_BethanyIntro, SootopolisCity_Gym_1F_Text_BethanyDefeat, SootopolisCity_Gym_1F_EventScript_BethanyDefeated
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_BethanyDefeated::
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_NPC3, SootopolisCity_Gym_1F_Movement_MoveUpLeft
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_MoveUpLeft::
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	walk_up
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	walk_left
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	face_down
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_AndreaIntro:
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hold it right there, Trainer!\n"
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "My brother and I will destroy you!$"
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_AndreaDefeat:
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ow man, you are strong!$"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_AndreaPostBattle:
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Tread carefully, man.$"
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_CrissyIntro:
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You will not stand a chance against the\n"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "both of us.$"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_CrissyDefeat:
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I failed you, brother!$"
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_CrissyPostBattle:
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Dark-types rock!\p"
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "They work in the dark, like ninjas!$"
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_OliviaIntro:
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hehehe.\n"
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Weren't expecting to fight me all of a\l"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "sudden?$"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_OliviaDefeat:
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I was beaten…$"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_OliviaPostBattle:
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You got strength, I give you that.$"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ConnieIntro:
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I should teach you how harsh battles\n"
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "can be.$"
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ConnieDefeat:
# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Oh.\n"
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You're strong.$"
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ConniePostBattle:
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I'll tell you something good.\p"
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you want to reach Chal, you'd\n"
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "need a lot of Full Restores.$"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BridgetIntro:
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Pokémon Gym of the highest level\n"
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the Hoenn region…\p"
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "That's the Sootopolis Gym.$"
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BridgetDefeat:
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "What a high level you are!$"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BridgetPostBattle:
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Rather than being satisfied by being\n"
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in a strong Gym, I imagine training in\l"
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "other places will make you stronger.\l"
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But above all, it looks more fun.$"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BriannaIntro:
# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hahaha!\n"
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Scared already?$"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BriannaDefeat:
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I went much too easy on you!$"
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BriannaPostBattle:
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You couldn't lay a finger on Chal,\n"
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I'm sure!$"
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_TiffanyIntro:
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sucker punch!!$"
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_TiffanyDefeat:
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, excuse me?!$"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_TiffanyPostBattle:
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "This is really obvious, but how strong\n"
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "you are as a Trainer has nothing to do\l"
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "with how young or old you are.$"
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_DaphneIntro:
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Light has purpose, only in darkness.$"
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_DaphneDefeat:
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You battled with more beauty than\n"
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I could muster…$"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_DaphnePostBattle:
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The grace you bring to battle is\n"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "fabulous.$"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BethanyIntro:
# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Get ready for your final challenge!$"
# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BethanyDefeat:
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Oops!$"
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_BethanyPostBattle:
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You are ready to fight Chal.\p"
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Good luck, Trainer.$"
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, Champion-\n"
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sootopolis's Gym Leader Chal is\n"
# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "an edgy Dark-type specialist.\p"
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to Chal, you'll have to\n"
# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "beat all these trainers!\p"
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself in the dark!$"
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even Chal, who was\n"
# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "supposedly the strongest Gym Leader in\l"
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hoenn.\p"
# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Check out your Trainer Card.\p"
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you've gotten all the Badges, you're\n"
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "set for the Pokémon League challenge!$"
# 323 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 324 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 325 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You beat all of them,\n"
# 326 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "now it's my turn!\p"
# 327 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let's see if your win streak ends here.$"
# 328 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 329 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 331 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 332 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 333 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 334 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Looks like you won.\p"
# 335 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Take the Noir badge,\n"
# 336 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "you deserve it.$"
# 337 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 338 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 339 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the Noir Badge\n"
# 340 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "from Chal.$"
# 341 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 342 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 343 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal: Having the Noir Badge shall\n"
# 344 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "assure you the full obedience of all\l"
# 345 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "your Pokémon to your every command.\p"
# 346 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Noir Badge also allows the use\n"
# 347 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of the HM move Waterfall to scale\l"
# 348 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "walls of cascading water.\p"
# 349 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Take this as well…$"
# 350 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 351 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
# 352 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal: TM151 contains Knock Off.\p"
# 353 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "It deals more damage if the enemy\n"
# 354 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "is holding an item, and then knocks it\l"
# 355 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "down.\p"
# 356 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 357 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 358 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 359 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered Gym Leader Chal\n"
# 360 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the PokéNav.$"
# 361 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 362 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 363 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal: You have proved your worth,\n"
# 364 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}.\p"
# 365 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost reaches\n"
# 366 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of Hoenn, to the island Ever Grande.\p"
# 367 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you shall find the Pokémon\n"
# 368 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "League, your final challenge!$"
# 369 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 370 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 371 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There remains but one Badge to\n"
# 372 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "obtain in Hoenn.\p"
# 373 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you wish to challenge the Pokémon\n"
# 374 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "League, you must obtain the last\l"
# 375 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Badge from the Gym in Fortree.$"
# 376 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 377 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 378 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sootopolis City Pokémon Gym\p"
# 379 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal's certified Trainers:\n"
# 380 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wally$"
# 381 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 382 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 383 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sootopolis City Pokémon Gym\p"
# 384 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal's certified Trainers:\n"
# 385 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wally and {PLAYER}$"
# 386 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 387 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 388 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal: Ah, this Gym had returned to its\n"
# 389 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 390 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 391 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 392 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 393 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 394 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 395 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 396 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 397 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 398 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 399 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 400 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 401 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal: If I told you to become my\n"
# 402 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 403 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 404 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 405 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 406 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 407 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 408 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 409 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 410 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 411 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Chal: Ah, this Gym had returned to its\n"
# 412 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 413 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 414 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 415 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 416 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 417 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 418 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one Pokémon.\p"
# 419 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 420 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, Pokémon, please.$"
