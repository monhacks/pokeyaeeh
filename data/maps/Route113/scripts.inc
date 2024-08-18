# 1 "data/maps/Route113/scripts.pory"

# 2 "data/maps/Route113/scripts.pory"
Route113_MapScripts::
# 3 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 4 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 5 "data/maps/Route113/scripts.pory"
	.byte 0
# 6 "data/maps/Route113/scripts.pory"

# 7 "data/maps/Route113/scripts.pory"
Route113_OnResume:
# 8 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 9 "data/maps/Route113/scripts.pory"
	end
# 10 "data/maps/Route113/scripts.pory"

# 11 "data/maps/Route113/scripts.pory"
Route113_OnTransition:
# 12 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 14 "data/maps/Route113/scripts.pory"
	end
# 15 "data/maps/Route113/scripts.pory"

# 16 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather::
# 17 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 18 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 19 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 20 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 21 "data/maps/Route113/scripts.pory"
	return
# 22 "data/maps/Route113/scripts.pory"

# 23 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather::
# 24 "data/maps/Route113/scripts.pory"
	return
# 25 "data/maps/Route113/scripts.pory"

# 26 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 27 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 28 "data/maps/Route113/scripts.pory"
	end
# 29 "data/maps/Route113/scripts.pory"

# 30 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 31 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 32 "data/maps/Route113/scripts.pory"
	end
# 33 "data/maps/Route113/scripts.pory"

# 34 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 35 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 36 "data/maps/Route113/scripts.pory"
	end
# 37 "data/maps/Route113/scripts.pory"

# 38 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 39 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 40 "data/maps/Route113/scripts.pory"
	end
# 41 "data/maps/Route113/scripts.pory"

# 42 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 43 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 44 "data/maps/Route113/scripts.pory"
	end
# 45 "data/maps/Route113/scripts.pory"

# 46 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 47 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 48 "data/maps/Route113/scripts.pory"
	end
# 49 "data/maps/Route113/scripts.pory"

# 50 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 51 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 52 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route113/scripts.pory"
	end
# 54 "data/maps/Route113/scripts.pory"

# 55 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 56 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 57 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route113/scripts.pory"
	end
# 59 "data/maps/Route113/scripts.pory"

# 60 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 61 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 62 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 64 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 65 "data/maps/Route113/scripts.pory"
	release
# 66 "data/maps/Route113/scripts.pory"
	end
# 67 "data/maps/Route113/scripts.pory"

# 68 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 69 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 70 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route113/scripts.pory"
	end
# 72 "data/maps/Route113/scripts.pory"

# 73 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 74 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 75 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 76 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
# 77 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 78 "data/maps/Route113/scripts.pory"
	release
# 79 "data/maps/Route113/scripts.pory"
	end
# 80 "data/maps/Route113/scripts.pory"

# 81 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 82 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 83 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 85 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 86 "data/maps/Route113/scripts.pory"
	release
# 87 "data/maps/Route113/scripts.pory"
	end
# 88 "data/maps/Route113/scripts.pory"

# 89 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 90 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 91 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route113/scripts.pory"
	end
# 93 "data/maps/Route113/scripts.pory"

# 94 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 95 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 96 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route113/scripts.pory"
	end
# 98 "data/maps/Route113/scripts.pory"

# 99 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 100 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat
# 101 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route113/scripts.pory"
	end
# 103 "data/maps/Route113/scripts.pory"

# 104 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 105 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat
# 106 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route113/scripts.pory"
	end
# 108 "data/maps/Route113/scripts.pory"

# 109 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 110 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 111 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route113/scripts.pory"
	end
# 113 "data/maps/Route113/scripts.pory"

# 114 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 115 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 116 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route113/scripts.pory"
	end
# 118 "data/maps/Route113/scripts.pory"

# 119 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 120 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 121 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route113/scripts.pory"
	end
# 123 "data/maps/Route113/scripts.pory"

# 124 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 125 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 126 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route113/scripts.pory"
	end
# 128 "data/maps/Route113/scripts.pory"

# 129 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 130 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 131 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 132 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 133 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 134 "data/maps/Route113/scripts.pory"

# 135 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 136 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 137 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 138 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 139 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 140 "data/maps/Route113/scripts.pory"

# 141 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 142 "data/maps/Route113/scripts.pory"
	.string "Route 113\n"
# 143 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} Route 111$"
# 144 "data/maps/Route113/scripts.pory"

# 145 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 146 "data/maps/Route113/scripts.pory"
	.string "Route 113\n"
# 147 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} Fallarbor Town$"
# 148 "data/maps/Route113/scripts.pory"

# 149 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 150 "data/maps/Route113/scripts.pory"
	.string "Trainer Tips\p"
# 151 "data/maps/Route113/scripts.pory"
	.string "You may register up to four Key Items\n"
# 152 "data/maps/Route113/scripts.pory"
	.string "in your Bag as Select.\p"
# 153 "data/maps/Route113/scripts.pory"
	.string "Simply press Select to use\n"
# 154 "data/maps/Route113/scripts.pory"
	.string "the registered items conveniently.$"
# 155 "data/maps/Route113/scripts.pory"

# 156 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 157 "data/maps/Route113/scripts.pory"
	.string "Glass Workshop\n"
# 158 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_EventScript_Madeline2::
# 162 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Madeline2_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route113/scripts.pory"
	givemon SPECIES_HATTERENE, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_JOLLY, 2, MON_FEMALE, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, TRUE
# 164 "data/maps/Route113/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HATTERENE
# 165 "data/maps/Route113/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HATTERENE
# 166 "data/maps/Route113/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/Route113/scripts.pory"
	message Route113_EventScript_Madeline2_Text_1
# 168 "data/maps/Route113/scripts.pory"
	waitmessage
# 169 "data/maps/Route113/scripts.pory"
	waitfanfare
# 170 "data/maps/Route113/scripts.pory"
	call Common_EventScript_Nickname
# 171 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Madeline2_Text_2, MSGBOX_NPC
# 172 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Madeline2_Text_3, MSGBOX_NPC
# 173 "data/maps/Route113/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM, 1
# 174 "data/maps/Route113/scripts.pory"
	setflag FLAG_ROUTE_113_BOSS_DEFEATED
# 175 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Madeline2_Text_4, MSGBOX_NPC
	return


Route113_EventScript_Madeline::
# 180 "data/maps/Route113/scripts.pory"
	lock
# 181 "data/maps/Route113/scripts.pory"
	faceplayer
# 182 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_JAYLEN
	goto_if 1, Route113_EventScript_Madeline_5
Route113_EventScript_Madeline_3:
# 198 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Madeline_Text_0, MSGBOX_NPC
Route113_EventScript_Madeline_1:
# 200 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_Madeline_2:
# 191 "data/maps/Route113/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 192 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_Madeline2
# 193 "data/maps/Route113/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 194 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Madeline2_Text_4, MSGBOX_NPC
	goto Route113_EventScript_Madeline_1

Route113_EventScript_Madeline_4:
# 184 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_LAO_1
	goto_if 1, Route113_EventScript_Madeline_9
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_5:
# 183 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_DILLON
	goto_if 1, Route113_EventScript_Madeline_4
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_8:
# 186 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_TORI_AND_TIA
	goto_if 1, Route113_EventScript_Madeline_13
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_9:
# 185 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_LUNG
	goto_if 1, Route113_EventScript_Madeline_8
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_12:
# 188 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_COBY
	goto_if 1, Route113_EventScript_Madeline_17
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_13:
# 187 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_SOPHIE
	goto_if 1, Route113_EventScript_Madeline_12
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_16:
# 190 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_WYATT
	goto_if 1, Route113_EventScript_Madeline_2
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_17:
# 189 "data/maps/Route113/scripts.pory"
	checktrainerflag TRAINER_LAWRENCE
	goto_if 1, Route113_EventScript_Madeline_16
	goto Route113_EventScript_Madeline_3


Route113_EventScript_Madeline2_Text_0:
# 162 "data/maps/Route113/scripts.pory"
	.string "Wow. That was a fantastic battle!\pYou truly are a strong Trainer!\pHere, take this.$"

Route113_EventScript_Madeline2_Text_1:
# 167 "data/maps/Route113/scripts.pory"
	.string "{PLAYER} received a Hatterene!$"

Route113_EventScript_Madeline2_Text_2:
# 171 "data/maps/Route113/scripts.pory"
	.string "Please raise it with care,\nhaha!$"

Route113_EventScript_Madeline2_Text_3:
# 172 "data/maps/Route113/scripts.pory"
	.string "Oh! Also this!$"

Route113_EventScript_Madeline2_Text_4:
# 175 "data/maps/Route113/scripts.pory"
	.string "Dazzling Gleam is a pretty strong move.\pEspecially in double battles,\nwhere hitting both your enemies is\lcrucial.$"

Route113_EventScript_Madeline_Text_0:
# 198 "data/maps/Route113/scripts.pory"
	.string "Hello, there.\pIf you'd like to challenge me,\nthe Route Boss,\lyou need to beat everyone here.\pGot it?$"
