# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 3 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 4 "data/maps/Route123/scripts.pory"
	.byte 0
# 5 "data/maps/Route123/scripts.pory"

# 6 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 7 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 8 "data/maps/Route123/scripts.pory"
	end
# 9 "data/maps/Route123/scripts.pory"

# 10 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 11 "data/maps/Route123/scripts.pory"
	lock
# 12 "data/maps/Route123/scripts.pory"
	faceplayer
# 13 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveThis, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 16 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 17 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 18 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 19 "data/maps/Route123/scripts.pory"
	release
# 20 "data/maps/Route123/scripts.pory"
	end
# 21 "data/maps/Route123/scripts.pory"

# 22 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 23 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 24 "data/maps/Route123/scripts.pory"
	release
# 25 "data/maps/Route123/scripts.pory"
	end
# 26 "data/maps/Route123/scripts.pory"

# 27 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 28 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 29 "data/maps/Route123/scripts.pory"
	end
# 30 "data/maps/Route123/scripts.pory"

# 31 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 32 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 33 "data/maps/Route123/scripts.pory"
	end
# 34 "data/maps/Route123/scripts.pory"

# 35 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 36 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 37 "data/maps/Route123/scripts.pory"
	end
# 38 "data/maps/Route123/scripts.pory"

# 39 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 40 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 41 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route123/scripts.pory"
	end
# 43 "data/maps/Route123/scripts.pory"

# 44 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 45 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 46 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route123/scripts.pory"
	end
# 48 "data/maps/Route123/scripts.pory"

# 49 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 50 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
# 51 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 52 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchCameron
# 53 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 54 "data/maps/Route123/scripts.pory"
	release
# 55 "data/maps/Route123/scripts.pory"
	end
# 56 "data/maps/Route123/scripts.pory"

# 57 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 58 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 59 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 61 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 62 "data/maps/Route123/scripts.pory"
	release
# 63 "data/maps/Route123/scripts.pory"
	end
# 64 "data/maps/Route123/scripts.pory"

# 65 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 66 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 67 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route123/scripts.pory"
	end
# 69 "data/maps/Route123/scripts.pory"

# 70 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 71 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 72 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 73 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchJacki
# 74 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 75 "data/maps/Route123/scripts.pory"
	release
# 76 "data/maps/Route123/scripts.pory"
	end
# 77 "data/maps/Route123/scripts.pory"

# 78 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 79 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 80 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 82 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 83 "data/maps/Route123/scripts.pory"
	release
# 84 "data/maps/Route123/scripts.pory"
	end
# 85 "data/maps/Route123/scripts.pory"

# 86 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 87 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 88 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route123/scripts.pory"
	end
# 90 "data/maps/Route123/scripts.pory"

# 91 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 92 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat
# 93 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route123/scripts.pory"
	end
# 95 "data/maps/Route123/scripts.pory"

# 96 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 97 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat
# 98 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route123/scripts.pory"
	end
# 100 "data/maps/Route123/scripts.pory"

# 101 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 102 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 103 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route123/scripts.pory"
	end
# 105 "data/maps/Route123/scripts.pory"

# 106 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 107 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 108 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route123/scripts.pory"
	end
# 110 "data/maps/Route123/scripts.pory"

# 111 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 112 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 113 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route123/scripts.pory"
	end
# 115 "data/maps/Route123/scripts.pory"

# 116 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 117 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 118 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route123/scripts.pory"
	end
# 120 "data/maps/Route123/scripts.pory"

# 121 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 122 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 123 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route123/scripts.pory"
	end
# 125 "data/maps/Route123/scripts.pory"

# 126 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 127 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 128 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route123/scripts.pory"
	end
# 130 "data/maps/Route123/scripts.pory"

# 131 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 132 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 133 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route123/scripts.pory"
	end
# 135 "data/maps/Route123/scripts.pory"

# 136 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 137 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 138 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route123/scripts.pory"
	end
# 140 "data/maps/Route123/scripts.pory"

# 141 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 142 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 143 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 144 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchFernando
# 145 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 146 "data/maps/Route123/scripts.pory"
	release
# 147 "data/maps/Route123/scripts.pory"
	end
# 148 "data/maps/Route123/scripts.pory"

# 149 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 150 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 151 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 153 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 154 "data/maps/Route123/scripts.pory"
	release
# 155 "data/maps/Route123/scripts.pory"
	end
# 156 "data/maps/Route123/scripts.pory"

# 157 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 158 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 159 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route123/scripts.pory"
	end
# 161 "data/maps/Route123/scripts.pory"

# 162 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveThis:
# 163 "data/maps/Route123/scripts.pory"
	.string "I love Grass-type Pokémon!\p"
# 164 "data/maps/Route123/scripts.pory"
	.string "Here, you can have this!$"
# 165 "data/maps/Route123/scripts.pory"

# 166 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 167 "data/maps/Route123/scripts.pory"
	.string "I check trees with my Grass-type\n"
# 168 "data/maps/Route123/scripts.pory"
	.string "Pokémon. I'm like a tree doctor.$"
# 169 "data/maps/Route123/scripts.pory"

# 170 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 171 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} Route 123\n"
# 172 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} Route 118$"
# 173 "data/maps/Route123/scripts.pory"

# 174 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 175 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} Mt. Pyre\n"
# 176 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 177 "data/maps/Route123/scripts.pory"

# 178 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 179 "data/maps/Route123/scripts.pory"
	.string "Berry Master's House$"

Route123_EventScript_Violet2::
# 184 "data/maps/Route123/scripts.pory"
	msgbox Route123_EventScript_Violet2_Text_0
# 185 "data/maps/Route123/scripts.pory"
	givemon SPECIES_TROPIUS, 0, ITEM_SITRUS_BERRY, ITEM_CHERISH_BALL, 15, 2, MON_FEMALE, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_ENERGY_BALL, MOVE_LEAF_STORM, MOVE_JETSTREAM, MOVE_GROWTH, TRUE
# 186 "data/maps/Route123/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TROPIUS
# 187 "data/maps/Route123/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TROPIUS
# 188 "data/maps/Route123/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/Route123/scripts.pory"
	message Route123_EventScript_Violet2_Text_1
# 190 "data/maps/Route123/scripts.pory"
	waitmessage
# 191 "data/maps/Route123/scripts.pory"
	waitfanfare
# 192 "data/maps/Route123/scripts.pory"
	call Common_EventScript_Nickname
# 193 "data/maps/Route123/scripts.pory"
	msgbox Route123_EventScript_Violet2_Text_2, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route123/scripts.pory"
	msgbox Route123_EventScript_Violet2_Text_3
# 195 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TROPIUSITE, 1
# 196 "data/maps/Route123/scripts.pory"
	setflag FLAG_ROUTE_123_BOSS_DEFEATED
# 197 "data/maps/Route123/scripts.pory"
	msgbox Route123_EventScript_Violet2_Text_4, MSGBOX_AUTOCLOSE
	return


Route123_EventScript_Violet::
# 201 "data/maps/Route123/scripts.pory"
	lock
# 202 "data/maps/Route123/scripts.pory"
	faceplayer
# 203 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_WENDY
	goto_if 1, Route123_EventScript_Violet_5
Route123_EventScript_Violet_3:
# 224 "data/maps/Route123/scripts.pory"
	msgbox Route123_EventScript_Violet_Text_0, MSGBOX_NPC
Route123_EventScript_Violet_1:
# 226 "data/maps/Route123/scripts.pory"
	release
	end

Route123_EventScript_Violet_2:
# 217 "data/maps/Route123/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 218 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat, Route123_EventScript_Violet2
# 219 "data/maps/Route123/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 220 "data/maps/Route123/scripts.pory"
	msgbox Route123_EventScript_Violet2_Text_4, MSGBOX_AUTOCLOSE
	goto Route123_EventScript_Violet_1

Route123_EventScript_Violet_4:
# 205 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_CAMERON_1
	goto_if 1, Route123_EventScript_Violet_9
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_5:
# 204 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_BRAXTON
	goto_if 1, Route123_EventScript_Violet_4
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_8:
# 207 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_MIU_AND_YUKI
	goto_if 1, Route123_EventScript_Violet_13
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_9:
# 206 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_JACKI_1
	goto_if 1, Route123_EventScript_Violet_8
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_12:
# 209 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_FREDRICK
	goto_if 1, Route123_EventScript_Violet_17
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_13:
# 208 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_KINDRA
	goto_if 1, Route123_EventScript_Violet_12
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_16:
# 211 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_ED
	goto_if 1, Route123_EventScript_Violet_21
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_17:
# 210 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_ALBERTO
	goto_if 1, Route123_EventScript_Violet_16
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_20:
# 213 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_JONAS
	goto_if 1, Route123_EventScript_Violet_25
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_21:
# 212 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_KAYLEY
	goto_if 1, Route123_EventScript_Violet_20
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_24:
# 215 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_DAVIS
	goto_if 1, Route123_EventScript_Violet_28
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_25:
# 214 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_JAZMYN
	goto_if 1, Route123_EventScript_Violet_24
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_28:
# 216 "data/maps/Route123/scripts.pory"
	checktrainerflag TRAINER_FERNANDO_1
	goto_if 1, Route123_EventScript_Violet_2
	goto Route123_EventScript_Violet_3


Route123_EventScript_Violet2_Text_0:
# 184 "data/maps/Route123/scripts.pory"
	.string "Speaking of Berries…$"

Route123_EventScript_Violet2_Text_1:
# 189 "data/maps/Route123/scripts.pory"
	.string "{PLAYER} received an Tropius!$"

Route123_EventScript_Violet2_Text_2:
# 193 "data/maps/Route123/scripts.pory"
	.string "Tropius is one of my favorite Pokémon.\pI hope you will cherish it.$"

Route123_EventScript_Violet2_Text_3:
# 194 "data/maps/Route123/scripts.pory"
	.string "And this, too!$"

Route123_EventScript_Violet2_Text_4:
# 197 "data/maps/Route123/scripts.pory"
	.string "Holding Tropiusite,\nyour Tropius will Mega Evolve!\pIt'll be much stronger and bulkier!$"

Route123_EventScript_Violet_Text_0:
# 224 "data/maps/Route123/scripts.pory"
	.string "Good times are good aromas!\pOh. You want a battle?\pI accept your challenge,\njust not now.$"
