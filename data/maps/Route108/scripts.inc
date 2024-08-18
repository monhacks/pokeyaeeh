# 1 "data/maps/Route108/scripts.pory"

# 2 "data/maps/Route108/scripts.pory"
Route108_MapScripts::
# 3 "data/maps/Route108/scripts.pory"
	.byte 0
# 4 "data/maps/Route108/scripts.pory"

# 5 "data/maps/Route108/scripts.pory"
Route108_EventScript_Matthew::
# 6 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 7 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Route108/scripts.pory"
	end
# 9 "data/maps/Route108/scripts.pory"

# 10 "data/maps/Route108/scripts.pory"
Route108_EventScript_Tara::
# 11 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 12 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route108/scripts.pory"
	end
# 14 "data/maps/Route108/scripts.pory"

# 15 "data/maps/Route108/scripts.pory"
Route108_EventScript_Missy::
# 16 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 17 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route108/scripts.pory"
	end
# 19 "data/maps/Route108/scripts.pory"

# 20 "data/maps/Route108/scripts.pory"
Route108_EventScript_Carolina::
# 21 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
# 22 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route108/scripts.pory"
	end
# 24 "data/maps/Route108/scripts.pory"

# 25 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory::
# 26 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 27 "data/maps/Route108/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 28 "data/maps/Route108/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
# 29 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 30 "data/maps/Route108/scripts.pory"
	release
# 31 "data/maps/Route108/scripts.pory"
	end
# 32 "data/maps/Route108/scripts.pory"

# 33 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 34 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 35 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 37 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 38 "data/maps/Route108/scripts.pory"
	release
# 39 "data/maps/Route108/scripts.pory"
	end
# 40 "data/maps/Route108/scripts.pory"

# 41 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRematch::
# 42 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 43 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route108/scripts.pory"
	end

Route108_EventScript_Jerome2::
# 48 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Jerome2_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route108/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 50 "data/maps/Route108/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/Route108/scripts.pory"
	waitmessage
# 52 "data/maps/Route108/scripts.pory"
	waitfanfare
# 53 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Jerome2_Text_1
# 54 "data/maps/Route108/scripts.pory"
	giveitem ITEM_TM_BUBBLE_BEAM, 1
# 55 "data/maps/Route108/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/Route108/scripts.pory"
	setflag FLAG_ROUTE_108_BOSS_DEFEATED
# 57 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Jerome2_Text_2, MSGBOX_NPC
	return


Route108_EventScript_Jerome::
# 63 "data/maps/Route108/scripts.pory"
	lock
# 64 "data/maps/Route108/scripts.pory"
	faceplayer
# 65 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_DARRIN
	goto_if 1, Route108_EventScript_Jerome_5
Route108_EventScript_Jerome_3:
# 83 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Jerome_Text_0, MSGBOX_NPC
Route108_EventScript_Jerome_1:
# 85 "data/maps/Route108/scripts.pory"
	release
	end

Route108_EventScript_Jerome_2:
# 76 "data/maps/Route108/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 77 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated, Route108_EventScript_Jerome2
# 78 "data/maps/Route108/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 79 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Jerome2_Text_2, MSGBOX_AUTOCLOSE
	goto Route108_EventScript_Jerome_1

Route108_EventScript_Jerome_4:
# 67 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_DENISE
	goto_if 1, Route108_EventScript_Jerome_9
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_5:
# 66 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_TONY_1
	goto_if 1, Route108_EventScript_Jerome_4
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_8:
# 69 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_LISA_AND_RAY
	goto_if 1, Route108_EventScript_Jerome_13
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_9:
# 68 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_BETH
	goto_if 1, Route108_EventScript_Jerome_8
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_12:
# 71 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_MISSY
	goto_if 1, Route108_EventScript_Jerome_17
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_13:
# 70 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_CAMRON
	goto_if 1, Route108_EventScript_Jerome_12
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_16:
# 73 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_TARA
	goto_if 1, Route108_EventScript_Jerome_21
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_17:
# 72 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_MATTHEW
	goto_if 1, Route108_EventScript_Jerome_16
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_20:
# 75 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_CORY_1
	goto_if 1, Route108_EventScript_Jerome_2
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_21:
# 74 "data/maps/Route108/scripts.pory"
	checktrainerflag TRAINER_CAROLINA
	goto_if 1, Route108_EventScript_Jerome_20
	goto Route108_EventScript_Jerome_3


Route108_EventScript_Jerome2_Text_0:
# 48 "data/maps/Route108/scripts.pory"
	.string "Ah yes!\pPeak battle!\pHere, I have an extra!$"

Route108_EventScript_Jerome2_Text_1:
# 53 "data/maps/Route108/scripts.pory"
	.string "And this, too!$"

Route108_EventScript_Jerome2_Text_2:
# 57 "data/maps/Route108/scripts.pory"
	.string "Bubble Beam is an excellent move!\pIt can also lower the foe's speed.$"

Route108_EventScript_Jerome_Text_0:
# 83 "data/maps/Route108/scripts.pory"
	.string "I'm gonna swim the entire region!\p… …\pShoo! Meet me when you are strong!$"
