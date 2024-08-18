# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_HereYouGo, MSGBOX_DEFAULT
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    clearflag B_FLAG_INVERSE_BATTLE
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_GIGA_IMPACT
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_GIGA_IMPACT
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lavaridge's Gym Leader Qanak\n"
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses Normal-type Pokémon.\p"
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "He's just a normal guy. Haha\p"
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Get, it? Normal? Hehe.\n"
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Nevermind…\p"
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Anyways, there's nothing quite special\n"
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "about this gym.\l"
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Except for the Gym battle!\p"
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't suggest bringing Rock-types or\n"
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Steel-types here.\p"
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can't spoil the surprise for ya!\p"
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Go, get 'em, Champ!$"
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was really fun battle!\p"
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Didn't expect the inverse twist\n"
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "did ya?\p"
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Now, I heard the Gym in Petalburg has\n"
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "opened, why not head there?$"
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, hey.\n"
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "What's up?$"
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "D'oh!…$"
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm a family guy, not some professional\n"
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon Trainer.\p"
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you beat me fair and square.$"
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You stressed me out, man!$"
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You owe me some stress relievers!$"
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "My wife said we'll dominate you!$"
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You dominated both of us…$"
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have a masters degree in astro\n"
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "physics.\p"
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yet, I work as a Gym Trainer, here.\p"
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This economy sucks.$"
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "My husband is delusional.$"
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Go ahead, young one.$"
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "My son makes more money battling\n"
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Trainers than my husband ever will.\p"
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And he has a masters degree in astro\n"
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uhh something something.$"
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yup, I cooled down.$"
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our Leader.$"
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ah-ha!\p"
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Didn't expect that, did you?.$"
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of Qanak's power.\p"
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Too many people underestimate\n"
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Normal types.\p"
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's see if you do and can deal with\n"
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the circumstances.$"
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well done!\n"
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That was a good match.$"
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_HereYouGo:
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Here you go lad.\n"
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You deserve this Badge for your\l"
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "inginuity in the Reverse battle.$"
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the Reverse Badge\n"
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from Qanak.$"
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a Reverse Badge, all Pokémon\n"
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets Pokémon use the HM move\n"
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Strength outside of battle.\p"
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Besides the badge, here is a TM.$"
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM130 contains Giga Impact.\p"
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It ain't special, but it packs one\n"
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hell of a punch.$"
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered Gym Leader Qanak\n"
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the PokéNav.$"
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You should head to Petalburg City Gym\n"
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "next.\p"
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I heard that their Gym Leader is back.$"
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\p"
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Qanak's certified Trainers:\n"
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Wally$"
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\p"
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Qanak's certified Trainers:\n"
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Wally and {PLAYER}$"
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Qanak: Losing a battle isn't going\n"
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love Pokémon.\n"
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this Gym!\p"
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Qanak: I lost the match,\n"
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Qanak: Losing a battle isn't going\n"
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love Pokémon.\n"
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this Gym!\p"
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one Pokémon\n"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two Pokémon.$"

LavaridgeTown_Gym_1F_EventScript_Flannery::
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_AXLE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_5
LavaridgeTown_Gym_1F_EventScript_Flannery_3:
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Text_0, MSGBOX_NPC
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_2:
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag B_FLAG_INVERSE_BATTLE
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_RETURN, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_4:
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_JACE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_5:
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_COLE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_4
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_8:
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_DANIELLE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_12
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_9:
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_ELI
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_8
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_12:
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_GERALD
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3


LavaridgeTown_Gym_1F_EventScript_Flannery_Text_0:
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Why don't you beat every trainer\nhere before talking to me again?$"
