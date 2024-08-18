# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_FATMAN, 21
# 3 "data/maps/Route118/scripts.pory"

# 4 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 5 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 7 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 8 "data/maps/Route118/scripts.pory"
	.byte 0
# 9 "data/maps/Route118/scripts.pory"

# 10 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 11 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 12 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 14 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route118/scripts.pory"
	end
# 16 "data/maps/Route118/scripts.pory"

# 17 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 18 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 19 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 20 "data/maps/Route118/scripts.pory"
	end
# 21 "data/maps/Route118/scripts.pory"

# 22 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 23 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 24 "data/maps/Route118/scripts.pory"
	.2byte 0
# 25 "data/maps/Route118/scripts.pory"

# 26 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 27 "data/maps/Route118/scripts.pory"
	lock
# 28 "data/maps/Route118/scripts.pory"
	faceplayer
# 29 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, Route118_EventScript_ReceivedGoodRod
# 30 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 31 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
# 32 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
# 33 "data/maps/Route118/scripts.pory"
	end
# 34 "data/maps/Route118/scripts.pory"

# 35 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 36 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 37 "data/maps/Route118/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 38 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 39 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 40 "data/maps/Route118/scripts.pory"
	release
# 41 "data/maps/Route118/scripts.pory"
	end
# 42 "data/maps/Route118/scripts.pory"

# 43 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 44 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 45 "data/maps/Route118/scripts.pory"
	release
# 46 "data/maps/Route118/scripts.pory"
	end
# 47 "data/maps/Route118/scripts.pory"

# 48 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 49 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 50 "data/maps/Route118/scripts.pory"
	release
# 51 "data/maps/Route118/scripts.pory"
	end
# 52 "data/maps/Route118/scripts.pory"

# 53 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 54 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 55 "data/maps/Route118/scripts.pory"
	end
# 56 "data/maps/Route118/scripts.pory"

# 57 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 58 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 59 "data/maps/Route118/scripts.pory"
	end
# 60 "data/maps/Route118/scripts.pory"

# 61 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 62 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 63 "data/maps/Route118/scripts.pory"
	end
# 64 "data/maps/Route118/scripts.pory"

# 65 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 66 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 67 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 68 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 69 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 70 "data/maps/Route118/scripts.pory"
	release
# 71 "data/maps/Route118/scripts.pory"
	end
# 72 "data/maps/Route118/scripts.pory"

# 73 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 74 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 75 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 77 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 78 "data/maps/Route118/scripts.pory"
	release
# 79 "data/maps/Route118/scripts.pory"
	end
# 80 "data/maps/Route118/scripts.pory"

# 81 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 82 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 83 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route118/scripts.pory"
	end
# 85 "data/maps/Route118/scripts.pory"

# 86 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 87 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 88 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route118/scripts.pory"
	end
# 90 "data/maps/Route118/scripts.pory"

# 91 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 92 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 93 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route118/scripts.pory"
	end
# 95 "data/maps/Route118/scripts.pory"

# 96 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 97 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 98 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 99 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 100 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 101 "data/maps/Route118/scripts.pory"
	release
# 102 "data/maps/Route118/scripts.pory"
	end
# 103 "data/maps/Route118/scripts.pory"

# 104 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 105 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 106 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 108 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 109 "data/maps/Route118/scripts.pory"
	release
# 110 "data/maps/Route118/scripts.pory"
	end
# 111 "data/maps/Route118/scripts.pory"

# 112 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 113 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 114 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route118/scripts.pory"
	end
# 116 "data/maps/Route118/scripts.pory"

# 117 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 118 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 119 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route118/scripts.pory"
	end
# 121 "data/maps/Route118/scripts.pory"

# 122 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 123 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 124 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route118/scripts.pory"
	end
# 126 "data/maps/Route118/scripts.pory"

# 127 "data/maps/Route118/scripts.pory"
Route118_EventScript_AmnesiaGiver::
# 128 "data/maps/Route118/scripts.pory"
	lock
# 129 "data/maps/Route118/scripts.pory"
	faceplayer
# 130 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_AMNESIA, Route118_EventScript_DontForgot
# 131 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_Hmm, MSGBOX_DEFAULT
# 132 "data/maps/Route118/scripts.pory"
	playse SE_PIN
# 133 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_FATMAN, Common_Movement_QuestionMark
# 134 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_FATMAN, Common_Movement_Delay48
# 136 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_Forgor, MSGBOX_DEFAULT
# 138 "data/maps/Route118/scripts.pory"
	giveitem ITEM_TM_AMNESIA
# 139 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontForgot, MSGBOX_NPC
# 140 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_TM_AMNESIA
# 141 "data/maps/Route118/scripts.pory"
	release
# 142 "data/maps/Route118/scripts.pory"
	end
# 143 "data/maps/Route118/scripts.pory"

# 144 "data/maps/Route118/scripts.pory"
Route118_EventScript_DontForgot:
# 145 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontForgot, MSGBOX_NPC
# 146 "data/maps/Route118/scripts.pory"
	end
# 147 "data/maps/Route118/scripts.pory"

# 148 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 149 "data/maps/Route118/scripts.pory"
	.string "Mystic: Hi, {PLAYER}{KUN}!\p"
# 150 "data/maps/Route118/scripts.pory"
	.string "It's me, Mystic!\n"
# 151 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford.\p"
# 152 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of Pokémon\n"
# 153 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 154 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of Pokémon\n"
# 155 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 156 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 157 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 158 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 159 "data/maps/Route118/scripts.pory"
	.string "all sorts of Pokémon.\p"
# 160 "data/maps/Route118/scripts.pory"
	.string "As a Trainer of Pokémon,\n"
# 161 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 162 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 163 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 164 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 165 "data/maps/Route118/scripts.pory"

# 166 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 167 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 168 "data/maps/Route118/scripts.pory"
	.string "A Super Rod is really super!\p"
# 169 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 170 "data/maps/Route118/scripts.pory"

# 171 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 172 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 173 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 174 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 175 "data/maps/Route118/scripts.pory"
	.string "Take this Super Rod!$"
# 176 "data/maps/Route118/scripts.pory"

# 177 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 178 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 179 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 180 "data/maps/Route118/scripts.pory"

# 181 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 182 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 183 "data/maps/Route118/scripts.pory"

# 184 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 185 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of Pokémon\n"
# 186 "data/maps/Route118/scripts.pory"
	.string "with your Super Rod.$"
# 187 "data/maps/Route118/scripts.pory"

# 188 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 189 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 190 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 191 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 192 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 193 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 194 "data/maps/Route118/scripts.pory"

# 195 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 196 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 197 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 198 "data/maps/Route118/scripts.pory"

# 199 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 200 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 201 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"
# 202 "data/maps/Route118/scripts.pory"

# 203 "data/maps/Route118/scripts.pory"
Route118_Text_Hmm:
# 204 "data/maps/Route118/scripts.pory"
	.string "Hmm…\p"
# 205 "data/maps/Route118/scripts.pory"
	.string "… … … … …\p"
# 206 "data/maps/Route118/scripts.pory"
	.string "… … … … …$"
# 207 "data/maps/Route118/scripts.pory"

# 208 "data/maps/Route118/scripts.pory"
Route118_Text_Forgor:
# 209 "data/maps/Route118/scripts.pory"
	.string "I forgor……$"
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_Text_DontForgot:
# 212 "data/maps/Route118/scripts.pory"
	.string "Here's a piece of advice:\n"
# 213 "data/maps/Route118/scripts.pory"
	.string "Don't forgor.$"

Route118_EventScript_Chester2::
# 217 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Chester2_Text_0, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route118/scripts.pory"
	givemon SPECIES_PIDGEOT, 0, ITEM_FOCUS_SASH, ITEM_CHERISH_BALL, NATURE_MODEST, 2, MON_MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_JETSTREAM, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, TRUE
# 219 "data/maps/Route118/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIDGEOT
# 220 "data/maps/Route118/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIDGEOT
# 221 "data/maps/Route118/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 222 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Chester2_Text_1
# 223 "data/maps/Route118/scripts.pory"
	waitmessage
# 224 "data/maps/Route118/scripts.pory"
	waitfanfare
# 225 "data/maps/Route118/scripts.pory"
	call Common_EventScript_Nickname
# 226 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Chester2_Text_2, MSGBOX_NPC
# 227 "data/maps/Route118/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 228 "data/maps/Route118/scripts.pory"
	setflag FLAG_ROUTE_118_BOSS_DEFEATED
# 229 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Chester2_Text_3, MSGBOX_NPC
	return


Route118_EventScript_Chester::
# 234 "data/maps/Route118/scripts.pory"
	lock
# 235 "data/maps/Route118/scripts.pory"
	faceplayer
# 236 "data/maps/Route118/scripts.pory"
	checktrainerflag TRAINER_ROSE_1
	goto_if 1, Route118_EventScript_Chester_5
Route118_EventScript_Chester_3:
# 249 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Chester_Text_1, MSGBOX_NPC
Route118_EventScript_Chester_1:
# 251 "data/maps/Route118/scripts.pory"
	release
	end

Route118_EventScript_Chester_2:
# 242 "data/maps/Route118/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 243 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat, Route118_EventScript_Chester2
# 244 "data/maps/Route118/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 245 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Chester_Text_0, MSGBOX_NPC
	goto Route118_EventScript_Chester_1

Route118_EventScript_Chester_4:
# 238 "data/maps/Route118/scripts.pory"
	checktrainerflag TRAINER_WADE
	goto_if 1, Route118_EventScript_Chester_9
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_5:
# 237 "data/maps/Route118/scripts.pory"
	checktrainerflag TRAINER_BARNY
	goto_if 1, Route118_EventScript_Chester_4
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_8:
# 240 "data/maps/Route118/scripts.pory"
	checktrainerflag TRAINER_PERRY
	goto_if 1, Route118_EventScript_Chester_12
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_9:
# 239 "data/maps/Route118/scripts.pory"
	checktrainerflag TRAINER_DALTON_1
	goto_if 1, Route118_EventScript_Chester_8
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_12:
# 241 "data/maps/Route118/scripts.pory"
	checktrainerflag TRAINER_DEANDRE
	goto_if 1, Route118_EventScript_Chester_2
	goto Route118_EventScript_Chester_3


Route118_EventScript_Chester2_Text_0:
# 217 "data/maps/Route118/scripts.pory"
	.string "That was a heck of a battle!\pAs promised…$"

Route118_EventScript_Chester2_Text_1:
# 222 "data/maps/Route118/scripts.pory"
	.string "{PLAYER} received a Pidgeot!$"

Route118_EventScript_Chester2_Text_2:
# 226 "data/maps/Route118/scripts.pory"
	.string "You shall soar the skies with this!$"

Route118_EventScript_Chester2_Text_3:
# 229 "data/maps/Route118/scripts.pory"
	.string "You should give it to Pidgoet.\pYou'll unlock it's full potential.$"

Route118_EventScript_Chester_Text_0:
# 245 "data/maps/Route118/scripts.pory"
	.string "I suggest you give that item to Pidgoet.\pYou'll unlock it's full potential.$"

Route118_EventScript_Chester_Text_1:
# 249 "data/maps/Route118/scripts.pory"
	.string "I am a strong Bird Keeper.\pYou want to challenge me?\nHow about beating everyone here and you come\lto me?\pI'll give you a good reward if you beat\nme.$"
