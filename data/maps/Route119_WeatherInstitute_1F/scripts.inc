# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
.set LOCALID_LITTLE_BOY, 5
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition:
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_BOY, 0, 5
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy::
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Scientist::
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_MET_WEATHER_INSTITUTE_SCIENTIST, Route119_WeatherInstitute_1F_EventScript_Pokemart
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ThankYouForSavingUs, MSGBOX_DEFAULT
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_MOON_ROCK, 1
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_HEAT_ROCK, 1
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_DAMP_ROCK, 1
# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_SMOOTH_ROCK, 1
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_ICY_ROCK, 1
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_GiveWeatherRocks, MSGBOX_DEFAULT
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_MET_WEATHER_INSTITUTE_SCIENTIST
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Pokemart:
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	message Route119_WeatherInstitute_1F_Text_WouldYouLikeToBuyProducts
# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	waitmessage
# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	pokemart WeatherInstitute_1F_Pokemart_TMsItems
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_PleaseVisitAnytime, MSGBOX_DEFAULT
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.align 2
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
WeatherInstitute_1F_Pokemart_TMsItems:
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_FULL_MOON
# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_SNOWSCAPE
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_WEATHER_BALL
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_METAL_TERRAIN
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_GRASSY_TERRAIN
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_MISTY_TERRAIN
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_ELECTRIC_TERRAIN
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_PSYCHIC_TERRAIN
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TM_TERRAIN_PULSE
# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_MOON_ROCK
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 119 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 120 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 121 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_METAL_SEED
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.2byte ITEM_NONE
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 124 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ThankYouForSavingUs:
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Th-thank you for saving us!\p"
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "… … …\p"
# 129 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh! Nice meeting you {PLAYER}!\p"
# 130 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Here's a small reward from me for\n"
# 131 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "saving us.$"
# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_GiveWeatherRocks:
# 134 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "These rocks keep weather up for longer\n"
# 135 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "periods.\p"
# 136 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Since you're a Trainer, you might find\n"
# 137 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "more use for them!\p"
# 138 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "If you'd like to buy more, we also sell\n"
# 139 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "these items here.$"
# 140 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 141 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 142 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WouldYouLikeToBuyProducts:
# 143 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello, {PLAYER}.\n"
# 144 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Would you like to buy our latest\l"
# 145 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "products?$"
# 146 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 147 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_PleaseVisitAnytime:
# 148 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Please visit anytime!$"
# 149 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 150 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 151 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The Boss got interested in\n"
# 152 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the research they have going here,\l"
# 153 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "so he sent us out.\p"
# 154 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "You quit meddling!$"
# 155 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 156 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 157 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
# 158 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blasted by a kid…$"
# 159 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 160 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 161 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our Boss knows everything.\p"
# 162 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But I'm just a Grunt. What would I know\n"
# 163 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "about what he's thinking?$"
# 164 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 165 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 166 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 167 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What's a kid doing here?$"
# 168 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 169 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 170 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 171 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I lost?!$"
# 172 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 173 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 174 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
# 175 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I'll catch an earful for losing to a kid…\p"
# 176 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I should just take a nap in the bed…$"
# 177 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 178 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 179 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
# 180 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "upstairs!$"
# 181 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 182 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 183 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\p"
# 184 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I wish I could be a Pokémon Trainer\n"
# 185 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "like you!$"
# 186 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 187 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 188 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The Professor loves rain.\n"
# 189 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "That's a fact.\p"
# 190 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But if it keeps raining, people will be in\n"
# 191 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "trouble. That's another fact.\p"
# 192 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "And thus, the Professor is studying\n"
# 193 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "if the rain can be put to good use.$"
# 194 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 195 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
# 196 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the Institute,\n"
# 197 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "we study the weather patterns over\l"
# 198 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the Hoenn region.\p"
# 199 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been noticing temporary and\n"
# 200 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "isolated cases of droughts and\l"
# 201 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "heavy rain lately…$"
# 202 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 203 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 204 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
# 205 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been saved by your actions!\p"
# 206 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What I don't understand is what on\n"
# 207 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "earth the Aquas were up to.$"
# 208 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 209 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 210 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
# 211 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let's take a rest.$"
