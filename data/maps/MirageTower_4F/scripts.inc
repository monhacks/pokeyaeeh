
.set LOCALID_ROOT_FOSSIL, 1
.set LOCALID_CLAW_FOSSIL, 2

MirageTower_4F_MapScripts::
	.byte 0

MirageTower_4F_EventScript_Fossil::
	lock
	random 15
	addvar VAR_RESULT, ITEM_HELIX_FOSSIL
	finditem VAR_RESULT
	waitmessage
	waitfanfare
	delay 30
	setflag FLAG_DAILY_FOSSIL_RECEIVED
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
	end
