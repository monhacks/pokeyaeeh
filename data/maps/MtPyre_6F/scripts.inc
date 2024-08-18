# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
.set LOCALID_HEX_MANIAC, 1
# 3 "data/maps/MtPyre_6F/scripts.pory"

# 4 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 5 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 6 "data/maps/MtPyre_6F/scripts.pory"

# 7 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 8 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 9 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 10 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 11 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 12 "data/maps/MtPyre_6F/scripts.pory"
	release
# 13 "data/maps/MtPyre_6F/scripts.pory"
	end
# 14 "data/maps/MtPyre_6F/scripts.pory"

# 15 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 16 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 17 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 18 "data/maps/MtPyre_6F/scripts.pory"
	end
# 19 "data/maps/MtPyre_6F/scripts.pory"

# 20 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 21 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 22 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/MtPyre_6F/scripts.pory"
	end
# 24 "data/maps/MtPyre_6F/scripts.pory"

# 25 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_SignPost::
# 26 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Coco, MSGBOX_SIGN
# 27 "data/maps/MtPyre_6F/scripts.pory"
	end
# 28 "data/maps/MtPyre_6F/scripts.pory"

# 29 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 30 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
# 31 "data/maps/MtPyre_6F/scripts.pory"
	.string "A curious power flows into me…$"
# 32 "data/maps/MtPyre_6F/scripts.pory"

# 33 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 34 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…\p"
# 35 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
# 36 "data/maps/MtPyre_6F/scripts.pory"
	.string "of Pokémon in fitful sleep here…$"
# 37 "data/maps/MtPyre_6F/scripts.pory"

# 38 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 39 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 41 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 42 "data/maps/MtPyre_6F/scripts.pory"
	.string "your PokéNav Hiyah!$"
# 43 "data/maps/MtPyre_6F/scripts.pory"

# 44 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 47 "data/maps/MtPyre_6F/scripts.pory"

# 48 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 49 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 50 "data/maps/MtPyre_6F/scripts.pory"

# 51 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 52 "data/maps/MtPyre_6F/scripts.pory"
	.string "The Pokémon at rest here…\n"
# 53 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 54 "data/maps/MtPyre_6F/scripts.pory"

# 55 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
# 57 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have no fear for I am here!$"
# 58 "data/maps/MtPyre_6F/scripts.pory"

# 59 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"
# 61 "data/maps/MtPyre_6F/scripts.pory"

# 62 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 63 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost Trainer\n"
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "would be panicked and easy to beat.\p"
# 65 "data/maps/MtPyre_6F/scripts.pory"
	.string "It's dirty and I won't try it again…$"
# 66 "data/maps/MtPyre_6F/scripts.pory"

# 67 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Coco:
# 68 "data/maps/MtPyre_6F/scripts.pory"
	.string "Here lies Coco.\p"
# 69 "data/maps/MtPyre_6F/scripts.pory"
	.string "The beloved 18 year old cat of\n"
# 70 "data/maps/MtPyre_6F/scripts.pory"
	.string "ViralStarfish.\p"
# 71 "data/maps/MtPyre_6F/scripts.pory"
	.string "Please pay your respects, here.$"

MtPyre_6F_EventScript_Valerie2::
# 84 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_EventScript_Valerie2_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/MtPyre_6F/scripts.pory"
	givemon SPECIES_BANETTE, 0, ITEM_LEFTOVERS, ITEM_CHERISH_BALL, 3, 1, MON_MALE, 252, 252, 0, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_WILL_O_WISP, MOVE_POLTERGEIST, MOVE_RETURN, MOVE_SUCKER_PUNCH, TRUE
# 86 "data/maps/MtPyre_6F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BANETTE
# 87 "data/maps/MtPyre_6F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BANETTE
# 88 "data/maps/MtPyre_6F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 89 "data/maps/MtPyre_6F/scripts.pory"
	message MtPyre_6F_EventScript_Valerie2_Text_1
# 90 "data/maps/MtPyre_6F/scripts.pory"
	waitmessage
# 91 "data/maps/MtPyre_6F/scripts.pory"
	waitfanfare
# 92 "data/maps/MtPyre_6F/scripts.pory"
	call Common_EventScript_Nickname
# 93 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_EventScript_Valerie2_Text_2, MSGBOX_AUTOCLOSE
# 94 "data/maps/MtPyre_6F/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 95 "data/maps/MtPyre_6F/scripts.pory"
	setflag FLAG_MT_PYRE_BOSS_DEFEATED
# 96 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_EventScript_Valerie2_Text_3, MSGBOX_AUTOCLOSE
	return


MtPyre_6F_EventScript_Valerie::
# 100 "data/maps/MtPyre_6F/scripts.pory"
	lock
# 101 "data/maps/MtPyre_6F/scripts.pory"
	faceplayer
# 102 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_MARK
	goto_if 1, MtPyre_6F_EventScript_Valerie_5
MtPyre_6F_EventScript_Valerie_3:
# 118 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_EventScript_Valerie_Text_0, MSGBOX_NPC
# 119 "data/maps/MtPyre_6F/scripts.pory"
	delay 4
# 120 "data/maps/MtPyre_6F/scripts.pory"
	applymovement LOCALID_HEX_MANIAC, Common_Movement_FaceOriginalDirection
# 121 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
MtPyre_6F_EventScript_Valerie_1:
# 123 "data/maps/MtPyre_6F/scripts.pory"
	release
	end

MtPyre_6F_EventScript_Valerie_2:
# 111 "data/maps/MtPyre_6F/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 112 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_Valerie2
# 113 "data/maps/MtPyre_6F/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 114 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_EventScript_Valerie2_Text_3, MSGBOX_AUTOCLOSE
	goto MtPyre_6F_EventScript_Valerie_1

MtPyre_6F_EventScript_Valerie_4:
# 104 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_LEAH
	goto_if 1, MtPyre_6F_EventScript_Valerie_9
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_5:
# 103 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_DEZ_AND_LUKE
	goto_if 1, MtPyre_6F_EventScript_Valerie_4
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_8:
# 106 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_WILLIAM
	goto_if 1, MtPyre_6F_EventScript_Valerie_13
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_9:
# 105 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_ZANDER
	goto_if 1, MtPyre_6F_EventScript_Valerie_8
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_12:
# 108 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_GABRIELLE_1
	goto_if 1, MtPyre_6F_EventScript_Valerie_17
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_13:
# 107 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_KAYLA
	goto_if 1, MtPyre_6F_EventScript_Valerie_12
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_16:
# 110 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_ATSUSHI
	goto_if 1, MtPyre_6F_EventScript_Valerie_2
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_17:
# 109 "data/maps/MtPyre_6F/scripts.pory"
	checktrainerflag TRAINER_TASHA
	goto_if 1, MtPyre_6F_EventScript_Valerie_16
	goto MtPyre_6F_EventScript_Valerie_3


MtPyre_6F_EventScript_Valerie2_Text_0:
# 84 "data/maps/MtPyre_6F/scripts.pory"
	.string "My Banette.\nYou can have him.$"

MtPyre_6F_EventScript_Valerie2_Text_1:
# 89 "data/maps/MtPyre_6F/scripts.pory"
	.string "{PLAYER} received a Banette!$"

MtPyre_6F_EventScript_Valerie2_Text_2:
# 93 "data/maps/MtPyre_6F/scripts.pory"
	.string "You can make good use of this with\nBanette.$"

MtPyre_6F_EventScript_Valerie2_Text_3:
# 96 "data/maps/MtPyre_6F/scripts.pory"
	.string "Holding a Banettite,\nyour Banette can become just as\lstrong as mine!$"

MtPyre_6F_EventScript_Valerie_Text_0:
# 118 "data/maps/MtPyre_6F/scripts.pory"
	.string "…\nI'll be…\lwaiting for…\lyour challenge…$"
