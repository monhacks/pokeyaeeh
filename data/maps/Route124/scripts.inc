# 1 "data/maps/Route124/scripts.pory"

# 2 "data/maps/Route124/scripts.pory"
Route124_MapScripts::
# 3 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
# 4 "data/maps/Route124/scripts.pory"
	.byte 0
# 5 "data/maps/Route124/scripts.pory"

# 6 "data/maps/Route124/scripts.pory"
Route124_OnTransition:
# 7 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/Route124/scripts.pory"
	end
# 9 "data/maps/Route124/scripts.pory"

# 10 "data/maps/Route124/scripts.pory"
Route124_EventScript_HuntersHouseSign::
# 11 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
# 12 "data/maps/Route124/scripts.pory"
	end
# 13 "data/maps/Route124/scripts.pory"

# 14 "data/maps/Route124/scripts.pory"
Route124_EventScript_Spencer::
# 15 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
# 16 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/Route124/scripts.pory"
	end
# 18 "data/maps/Route124/scripts.pory"

# 19 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roland::
# 20 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
# 21 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/Route124/scripts.pory"
	end
# 23 "data/maps/Route124/scripts.pory"

# 24 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny::
# 25 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
# 26 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchJenny
# 28 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/Route124/scripts.pory"
	release
# 30 "data/maps/Route124/scripts.pory"
	end
# 31 "data/maps/Route124/scripts.pory"

# 32 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterJenny::
# 33 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 34 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 36 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 37 "data/maps/Route124/scripts.pory"
	release
# 38 "data/maps/Route124/scripts.pory"
	end
# 39 "data/maps/Route124/scripts.pory"

# 40 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchJenny::
# 41 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 42 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route124/scripts.pory"
	end
# 44 "data/maps/Route124/scripts.pory"

# 45 "data/maps/Route124/scripts.pory"
Route124_EventScript_Grace::
# 46 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
# 47 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route124/scripts.pory"
	end
# 49 "data/maps/Route124/scripts.pory"

# 50 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila::
# 51 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_EventScript_RegisterLila
# 52 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchLila
# 54 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 55 "data/maps/Route124/scripts.pory"
	release
# 56 "data/maps/Route124/scripts.pory"
	end
# 57 "data/maps/Route124/scripts.pory"

# 58 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterLila::
# 59 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 60 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 61 "data/maps/Route124/scripts.pory"
	release
# 62 "data/maps/Route124/scripts.pory"
	end
# 63 "data/maps/Route124/scripts.pory"

# 64 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchLila::
# 65 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat
# 66 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route124/scripts.pory"
	end
# 68 "data/maps/Route124/scripts.pory"

# 69 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy::
# 70 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_EventScript_RegisterRoy
# 71 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 72 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchRoy
# 73 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 74 "data/maps/Route124/scripts.pory"
	release
# 75 "data/maps/Route124/scripts.pory"
	end
# 76 "data/maps/Route124/scripts.pory"

# 77 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterRoy::
# 78 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 79 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 80 "data/maps/Route124/scripts.pory"
	release
# 81 "data/maps/Route124/scripts.pory"
	end
# 82 "data/maps/Route124/scripts.pory"

# 83 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchRoy::
# 84 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat
# 85 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route124/scripts.pory"
	end
# 87 "data/maps/Route124/scripts.pory"

# 88 "data/maps/Route124/scripts.pory"
Route124_EventScript_Declan::
# 89 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
# 90 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route124/scripts.pory"
	end
# 92 "data/maps/Route124/scripts.pory"

# 93 "data/maps/Route124/scripts.pory"
Route124_EventScript_Isabella::
# 94 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
# 95 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route124/scripts.pory"
	end
# 97 "data/maps/Route124/scripts.pory"

# 98 "data/maps/Route124/scripts.pory"
Route124_Text_HuntersHouse:
# 99 "data/maps/Route124/scripts.pory"
	.string "Hunter's House$"

Route124_EventScript_Chad2::
# 104 "data/maps/Route124/scripts.pory"
	msgbox Route124_EventScript_Chad2_Text_0
# 105 "data/maps/Route124/scripts.pory"
	givemon SPECIES_DREDNAW, 0, ITEM_WHITE_HERB, ITEM_CHERISH_BALL, 3, 0, MON_MALE, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_AQUA_FANGS, MOVE_SHELL_SMASH, MOVE_ROCK_SLIDE, MOVE_JAW_LOCK, TRUE
# 106 "data/maps/Route124/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREDNAW
# 107 "data/maps/Route124/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DREDNAW
# 108 "data/maps/Route124/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/Route124/scripts.pory"
	message Route124_EventScript_Chad2_Text_1
# 110 "data/maps/Route124/scripts.pory"
	waitmessage
# 111 "data/maps/Route124/scripts.pory"
	waitfanfare
# 112 "data/maps/Route124/scripts.pory"
	call Common_EventScript_Nickname
# 113 "data/maps/Route124/scripts.pory"
	msgbox Route124_EventScript_Chad2_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route124/scripts.pory"
	msgbox Route124_EventScript_Chad2_Text_3
# 115 "data/maps/Route124/scripts.pory"
	giveitem ITEM_DREDNITE, 1
# 116 "data/maps/Route124/scripts.pory"
	setflag FLAG_ROUTE_124_BOSS_DEFEATED
# 117 "data/maps/Route124/scripts.pory"
	msgbox Route124_EventScript_Chad2_Text_4, MSGBOX_AUTOCLOSE
	return


Route124_EventScript_Chad::
# 121 "data/maps/Route124/scripts.pory"
	lock
# 122 "data/maps/Route124/scripts.pory"
	faceplayer
# 123 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_SPENCER
	goto_if 1, Route124_EventScript_Chad_5
Route124_EventScript_Chad_3:
# 137 "data/maps/Route124/scripts.pory"
	msgbox Route124_EventScript_Chad_Text_0, MSGBOX_NPC
Route124_EventScript_Chad_1:
# 139 "data/maps/Route124/scripts.pory"
	release
	end

Route124_EventScript_Chad_2:
# 130 "data/maps/Route124/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 131 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat, Route124_EventScript_Chad2
# 132 "data/maps/Route124/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 133 "data/maps/Route124/scripts.pory"
	msgbox Route124_EventScript_Chad2_Text_4, MSGBOX_AUTOCLOSE
	goto Route124_EventScript_Chad_1

Route124_EventScript_Chad_4:
# 125 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_JENNY_1
	goto_if 1, Route124_EventScript_Chad_9
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_5:
# 124 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_ROLAND
	goto_if 1, Route124_EventScript_Chad_4
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_8:
# 127 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_LILA_AND_ROY_1
	goto_if 1, Route124_EventScript_Chad_13
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_9:
# 126 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_GRACE
	goto_if 1, Route124_EventScript_Chad_8
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_12:
# 129 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_ISABELLA
	goto_if 1, Route124_EventScript_Chad_2
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_13:
# 128 "data/maps/Route124/scripts.pory"
	checktrainerflag TRAINER_DECLAN
	goto_if 1, Route124_EventScript_Chad_12
	goto Route124_EventScript_Chad_3


Route124_EventScript_Chad2_Text_0:
# 104 "data/maps/Route124/scripts.pory"
	.string "You look like someone who could handle\nthis little guy!$"

Route124_EventScript_Chad2_Text_1:
# 109 "data/maps/Route124/scripts.pory"
	.string "{PLAYER} received an Drednaw!$"

Route124_EventScript_Chad2_Text_2:
# 113 "data/maps/Route124/scripts.pory"
	.string "Drednaw's bites are really powerful.\pSo, be careful if you wanna pet it.$"

Route124_EventScript_Chad2_Text_3:
# 114 "data/maps/Route124/scripts.pory"
	.string "And this, too!$"

Route124_EventScript_Chad2_Text_4:
# 117 "data/maps/Route124/scripts.pory"
	.string "Holding Drednite,\nyour Drednaw will Mega Evolve!\pIt's bites will be even more powerful!$"

Route124_EventScript_Chad_Text_0:
# 137 "data/maps/Route124/scripts.pory"
	.string "Fufufufu… I dive deep underwater!\pWho're you?\nYou want a battle?\pYou should beat everyone here then\ntry to challenge me!$"
