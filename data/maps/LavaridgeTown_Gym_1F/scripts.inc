
LavaridgeTown_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	.byte 0

LavaridgeTown_Gym_1F_OnTransition:
	end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
	msgbox LavaridgeTown_Gym_1F_Text_HereYouGo, MSGBOX_DEFAULT
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	clearflag B_FLAG_NO_BAG_USE
    clearflag B_FLAG_INVERSE_BATTLE
	setflag FLAG_BADGE04_GET
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
	giveitem ITEM_TM_GIGA_IMPACT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_RETURN
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
	giveitem ITEM_TM_GIGA_IMPACT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_RETURN
	return

LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
	trainerbattle_rematch TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Cole::
	trainerbattle_single TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Axle::
	trainerbattle_single TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle::
	trainerbattle_single TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Gerald::
	trainerbattle_single TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace::
	trainerbattle_single TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli::
	trainerbattle_single TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Lavaridge's Gym Leader Qanak\n"
	.string "uses Normal-type Pokémon.\p"
	.string "He's just a normal guy. Haha\p"
	.string "Get, it? Normal? Hehe.\n"
	.string "Nevermind…\p"
	.string "Anyways, there's nothing quite special\n"
	.string "about this gym.\l"
	.string "Except for the Gym battle!\p"
	.string "I don't suggest bringing Rock-types or\n"
	.string "Steel-types here.\p"
	.string "Can't spoil the surprise for ya!\p"
	.string "Go, get 'em, Champ!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
	.string "Yow! That was really fun battle!\p"
	.string "Didn't expect the inverse twist\n"
	.string "did ya?\p"
	.string "Now, I heard the Gym in Petalburg has\n"
	.string "opened, why not head there?$"

LavaridgeTown_Gym_1F_Text_ColeIntro:
	.string "Hey, hey.\n"
	.string "What's up?$"

LavaridgeTown_Gym_1F_Text_ColeDefeat:
	.string "D'oh!…$"

LavaridgeTown_Gym_1F_Text_ColePostBattle:
	.string "I'm a family guy, not some professional\n"
	.string "Pokémon Trainer.\p"
	.string "But you beat me fair and square.$"

LavaridgeTown_Gym_1F_Text_AxleIntro:
	.string "I'm trying to relieve my stress.\n"
	.string "Don't come along and stress me out!$"

LavaridgeTown_Gym_1F_Text_AxleDefeat:
	.string "You stressed me out, man!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle:
	.string "Haaah… Whew…\p"
	.string "You owe me some stress relievers!$"

LavaridgeTown_Gym_1F_Text_GeraldIntro:
	.string "My wife said we'll dominate you!$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat:
	.string "You dominated both of us…$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
	.string "I have a masters degree in astro\n"
	.string "physics.\p"
	.string "Yet, I work as a Gym Trainer, here.\p"
	.string "This economy sucks.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro:
	.string "My husband is delusional.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat:
	.string "Go ahead, young one.$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
	.string "My son makes more money battling\n"
	.string "Trainers than my husband ever will.\p"
	.string "And he has a masters degree in astro\n"
	.string "uhh something something.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro:
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat:
	.string "Yup, I cooled down.$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle:
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our Leader.$"

LavaridgeTown_Gym_B1F_Text_EliIntro:
	.string "Ah-ha!\p"
	.string "Didn't expect that, did you?.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat:
	.string "Well, it seems to me I lost without\n"
	.string "ever being in control.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle:
	.string "I stay here because I became a fan\n"
	.string "of Qanak's power.\p"
	.string "Hehehehe.$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro:
	.string "Too many people underestimate\n"
	.string "Normal types.\p"
	.string "Let's see if you do and can deal with\n"
	.string "the circumstances.$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
	.string "Well done!\n"
	.string "That was a good match.$"

LavaridgeTown_Gym_1F_Text_HereYouGo:
	.string "Here you go lad.\n"
	.string "You deserve this Badge for your\l"
	.string "inginuity in the Reverse battle.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
	.string "{PLAYER} received the Reverse Badge\n"
	.string "from Qanak.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
	.string "If you have a Reverse Badge, all Pokémon\n"
	.string "up to Level 50, even those you get in\l"
	.string "trades from other people, will obey\l"
	.string "you completely.\p"
	.string "And, it lets Pokémon use the HM move\n"
	.string "Strength outside of battle.\p"
	.string "Besides the badge, here is a TM.$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat:
	.string "That TM130 contains Giga Impact.\p"
	.string "It ain't special, but it packs one\n"
	.string "hell of a punch.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
	.string "Registered Gym Leader Qanak\n"
	.string "in the PokéNav.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
	.string "You should head to Petalburg City Gym\n"
	.string "next.\p"
	.string "I heard that their Gym Leader is back.$"

LavaridgeTown_Gym_1F_Text_GymStatue:
	.string "Lavaridge Town Pokémon Gym\p"
	.string "Qanak's certified Trainers:\n"
	.string "Wally$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified:
	.string "Lavaridge Town Pokémon Gym\p"
	.string "Qanak's certified Trainers:\n"
	.string "Wally and {PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
	.string "Qanak: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love Pokémon.\n"
	.string "I love to battle.\l"
	.string "And… I love this Gym!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
	.string "Whew!\n"
	.string "On the verge of eruption!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
	.string "Qanak: I lost the match,\n"
	.string "but I'm completely satisfied.\p"
	.string "It's not often I get to enjoy a battle\n"
	.string "this heated.\p"
	.string "Let's have another one like this\n"
	.string "again sometime!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
	.string "Qanak: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love Pokémon.\n"
	.string "I love to battle.\l"
	.string "And… I love this Gym!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!\p"
	.string "Oh, wait. Do you only have one Pokémon\n"
	.string "that can battle?\p"
	.string "I hate to say this, but when you come\n"
	.string "see me, bring at least two Pokémon.$"

LavaridgeTown_Gym_1F_EventScript_Flannery::
	lock
	faceplayer
	checktrainerflag TRAINER_AXLE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_5
LavaridgeTown_Gym_1F_EventScript_Flannery_3:
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Text_0, MSGBOX_NPC
	release
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_2:
	dotimebasedevents
	setflag B_FLAG_NO_BAG_USE
	setflag B_FLAG_INVERSE_BATTLE
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated
	shouldtryrematchbattle TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto_if_unset FLAG_RECEIVED_TM_RETURN, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_4:
	checktrainerflag TRAINER_JACE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_5:
	checktrainerflag TRAINER_COLE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_4
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_8:
	checktrainerflag TRAINER_DANIELLE
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_12
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_9:
	checktrainerflag TRAINER_ELI
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_8
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3

LavaridgeTown_Gym_1F_EventScript_Flannery_12:
	checktrainerflag TRAINER_GERALD
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_3


LavaridgeTown_Gym_1F_EventScript_Flannery_Text_0:
	.string "Why don't you beat every trainer\nhere before talking to me again?$"
