# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"

# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
    setflag B_FLAG_NO_BAG_USE
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FIRE_BLAST, MauvilleCity_Gym_EventScript_GiveShockWave2
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"

# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"

# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_HEAT_WAVE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FIRE_BLAST
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"

# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_HEAT_WAVE
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FIRE_BLAST
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"

# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"

# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"

# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"

# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"

# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"

# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"

# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"

# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"

# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"

# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"

# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"

# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"

# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"

# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep, the Leader of Mauville Gym,\n"
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "uses Fire-type Pokémon.\p"
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with Grass-type\n"
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, he'll burn them!\p"
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, due to advancement in technology\n"
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep was able to hustle a mini sun\l"
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "inside the gym!\p"
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It boosts the power of Fire-type\n"
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "attacks and lessens the power of\l"
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Water-type attacks.\p"
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ground-type or Rock-type Pokémon\n"
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "are your best friends here.\p"
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go for it, Champ!\p"
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Your fiery spirit burns bright!$"
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"

# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're burning hot!\n"
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've done it again, Champ!\p"
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Onward to Fallabour, my friend!$"
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"

# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My fiery soul, it'll shatter your\n"
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"

# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was rough, man!$"
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"

# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love Fire-types.\p"
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "We have a passion for burning!$"
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"

# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under Ydarissep!\n"
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"

# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And I lost that easily…$"
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"

# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep, our Gym Leader, has been\n"
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before I was born!$"
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"

# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This Gym's got the heat!\n"
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"

# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"

# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep says he likes setting\n"
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "public parks on fire.\p"
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "…\p"
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There are no public parks in Hoenn!$"
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"

# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my Pokémon's moves,\n"
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be cooled down!$"
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"

# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm warmed by your power!$"
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"

# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that Ydarissep loves battling\n"
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little kids.\p"
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Not the best example, heh.$"
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"

# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"

# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"

# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville Gym's Ydarissep has a shiny\n"
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"

# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hello, young trainer.\n"
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I am Ydarissep,\l"
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the Gym Leader of Mauville City,\l"
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "though you probably already knew that.\p"
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What you might not know is that,\n"
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in my youth, I was a passionate bug\l"
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "catcher…\p"
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "However, I realized that Bug-type\n"
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon weren't suited for my ambition\l"
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "to become a Gym Leader,\l"
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "as I constantly lost to Fire-type\l"
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon regardless of my efforts.\p"
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Since then, I've dedicated my life to\n"
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fire-type Pokémon.\p"
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And it has been incredibly successful\n"
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "for me!\p"
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now that we've introduced ourselves,\n"
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "let me show you just how heated things\l"
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "can get around here!$"
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"

# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wow, I've never seen someone with such\n"
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "a burning passion for battle like\l"
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "yours!\p"
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Please, accept this Badge!$"
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"

# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonNeedTwoPokemon:
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
    .string "Hello, young trainer.\p"
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Congratulations on making it all the\n"
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "way to me!\p"
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I would gladly battle you,\n"
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "but it seems you only have one Pokémon,\l"
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "it wouldn't be a fair fight.$"
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"

# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the Inferno Badge\n"
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from Ydarissep.$"
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"

# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the Inferno Badge, Pokémon can\n"
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use Rock Smash out of battle.\p"
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this TM too,\n"
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "this is my favorite move!$"
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"

# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM84 there contains Heat Wave.\p"
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a reliable move that never misses\n"
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "under sun!\p"
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It can deal significant damage to both\n"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "both of your opponents and\l"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "occasionally inflict a burn!\p"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"

# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered Gym Leader Ydarissep\n"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"

# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's never disheartening to lose to\n"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "such a promising trainer like yourself.\p"
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It only fuels my desire to battle\n"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "again.\l"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Next time, I will prevail!$"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"

# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, young person!$"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"

# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville City Pokémon Gym\p"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep's certified Trainers:\n"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wally$"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"

# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville City Pokémon Gym\p"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep's certified Trainers:\n"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wally and {PLAYER}$"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep: Ah-ha! Here at last!\n"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"

# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"

# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep: We'll have to recharge our\n"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ydarissep: Ah-ha! Here at last!\n"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one Pokémon with you!\p"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, all right?$"
