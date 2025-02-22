
.set LOCALID_NPC1, 11
.set LOCALID_NPC2, 10
.set LOCALID_NPC3, 9

SootopolisCity_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
	.byte 0

SootopolisCity_Gym_1F_OnTransition:
	checktrainerflag TRAINER_OLIVIA
	call_if TRUE, SootopolisCity_Gym_1_OliviaPos
	checktrainerflag TRAINER_BRIANNA
	call_if TRUE, SootopolisCity_Gym_1_BriannaPos
	checktrainerflag TRAINER_BETHANY
	call_if TRUE, SootopolisCity_Gym_1_BethanyPos
	return

SootopolisCity_Gym_1F_OnResume:
	call SootopolisCity_Gym_1F_OnTransition
	end

SootopolisCity_Gym_1_OliviaPos::
	setobjectxyperm LOCALID_NPC1, 7, 17
	return

SootopolisCity_Gym_1_BriannaPos::
	setobjectxyperm LOCALID_NPC2, 7, 12
	return

SootopolisCity_Gym_1_BethanyPos::
	setobjectxyperm LOCALID_NPC3, 7, 7
	return

SootopolisCity_Gym_1F_EventScript_Juan::
	dotimebasedevents
    setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
	shouldtryrematchbattle TRAINER_JUAN_1, SootopolisCity_Gym_1F_EventScript_JuanRematch
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanDefeated::
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setvar VAR_SOOTOPOLIS_CITY_STATE, 7
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	release
	end

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
	giveitem ITEM_TM_KNOCK_OFF
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
	giveitem ITEM_TM_KNOCK_OFF
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	release
	end

SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanRematch::
	trainerbattle_rematch TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Andrea::
	trainerbattle_single TRAINER_ANDREA, SootopolisCity_Gym_1F_Text_AndreaIntro, SootopolisCity_Gym_1F_Text_AndreaDefeat
	msgbox SootopolisCity_Gym_1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Crissy::
	trainerbattle_single TRAINER_CRISSY, SootopolisCity_Gym_1F_Text_CrissyIntro, SootopolisCity_Gym_1F_Text_CrissyDefeat
	msgbox SootopolisCity_Gym_1F_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA, SootopolisCity_Gym_1F_Text_OliviaIntro, SootopolisCity_Gym_1F_Text_OliviaDefeat, SootopolisCity_Gym_1F_EventScript_OliviaDefeated
	msgbox SootopolisCity_Gym_1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_OliviaDefeated::
	msgbox SootopolisCity_Gym_1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_NPC1, SootopolisCity_Gym_1F_Movement_MoveUpLeft
	waitmovement 0
	end

SootopolisCity_Gym_1F_EventScript_Connie::
	trainerbattle_single TRAINER_CONNIE, SootopolisCity_Gym_1F_Text_ConnieIntro, SootopolisCity_Gym_1F_Text_ConnieDefeat
	msgbox SootopolisCity_Gym_1F_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Bridget::
	trainerbattle_single TRAINER_BRIDGET, SootopolisCity_Gym_1F_Text_BridgetIntro, SootopolisCity_Gym_1F_Text_BridgetDefeat
	msgbox SootopolisCity_Gym_1F_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Brianna::
	trainerbattle_single TRAINER_BRIANNA, SootopolisCity_Gym_1F_Text_BriannaIntro, SootopolisCity_Gym_1F_Text_BriannaDefeat, SootopolisCity_Gym_1F_EventScript_BriannaDefeated
	msgbox SootopolisCity_Gym_1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_BriannaDefeated::
	msgbox SootopolisCity_Gym_1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_NPC2, SootopolisCity_Gym_1F_Movement_MoveUpLeft
	waitmovement 0
	end

SootopolisCity_Gym_1F_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY, SootopolisCity_Gym_1F_Text_TiffanyIntro, SootopolisCity_Gym_1F_Text_TiffanyDefeat
	msgbox SootopolisCity_Gym_1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Daphne::
	trainerbattle_single TRAINER_DAPHNE, SootopolisCity_Gym_1F_Text_DaphneIntro, SootopolisCity_Gym_1F_Text_DaphneDefeat
	msgbox SootopolisCity_Gym_1F_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_Bethany::
	trainerbattle_single TRAINER_BETHANY, SootopolisCity_Gym_1F_Text_BethanyIntro, SootopolisCity_Gym_1F_Text_BethanyDefeat, SootopolisCity_Gym_1F_EventScript_BethanyDefeated
	msgbox SootopolisCity_Gym_1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_BethanyDefeated::
	msgbox SootopolisCity_Gym_1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_NPC3, SootopolisCity_Gym_1F_Movement_MoveUpLeft
	waitmovement 0
	end

SootopolisCity_Gym_1F_Movement_MoveUpLeft::
	walk_up
	walk_left
	face_down
	step_end

SootopolisCity_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_GymStatue::
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_Text_AndreaIntro:
	.string "Hold it right there, Trainer!\n"
	.string "My brother and I will destroy you!$"

SootopolisCity_Gym_1F_Text_AndreaDefeat:
	.string "Ow man, you are strong!$"

SootopolisCity_Gym_1F_Text_AndreaPostBattle:
	.string "Tread carefully, man.$"

SootopolisCity_Gym_1F_Text_CrissyIntro:
	.string "You will not stand a chance against the\n"
	.string "both of us.$"

SootopolisCity_Gym_1F_Text_CrissyDefeat:
	.string "I failed you, brother!$"

SootopolisCity_Gym_1F_Text_CrissyPostBattle:
	.string "Dark-types rock!\p"
	.string "They work in the dark, like ninjas!$"

SootopolisCity_Gym_1F_Text_OliviaIntro:
	.string "Hehehe.\n"
	.string "Weren't expecting to fight me all of a\l"
	.string "sudden?$"

SootopolisCity_Gym_1F_Text_OliviaDefeat:
	.string "I was beaten…$"

SootopolisCity_Gym_1F_Text_OliviaPostBattle:
	.string "You got strength, I give you that.$"

SootopolisCity_Gym_1F_Text_ConnieIntro:
	.string "I should teach you how harsh battles\n"
	.string "can be.$"

SootopolisCity_Gym_1F_Text_ConnieDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

SootopolisCity_Gym_1F_Text_ConniePostBattle:
	.string "I'll tell you something good.\p"
	.string "If you want to reach Chal, you'd\n"
	.string "need a lot of Full Restores.$"

SootopolisCity_Gym_1F_Text_BridgetIntro:
	.string "The Pokémon Gym of the highest level\n"
	.string "in the Hoenn region…\p"
	.string "That's the Sootopolis Gym.$"

SootopolisCity_Gym_1F_Text_BridgetDefeat:
	.string "What a high level you are!$"

SootopolisCity_Gym_1F_Text_BridgetPostBattle:
	.string "Rather than being satisfied by being\n"
	.string "in a strong Gym, I imagine training in\l"
	.string "other places will make you stronger.\l"
	.string "But above all, it looks more fun.$"

SootopolisCity_Gym_1F_Text_BriannaIntro:
	.string "Hahaha!\n"
	.string "Scared already?$"

SootopolisCity_Gym_1F_Text_BriannaDefeat:
	.string "I went much too easy on you!$"

SootopolisCity_Gym_1F_Text_BriannaPostBattle:
	.string "You couldn't lay a finger on Chal,\n"
	.string "I'm sure!$"

SootopolisCity_Gym_1F_Text_TiffanyIntro:
	.string "Sucker punch!!$"

SootopolisCity_Gym_1F_Text_TiffanyDefeat:
	.string "Well, excuse me?!$"

SootopolisCity_Gym_1F_Text_TiffanyPostBattle:
	.string "This is really obvious, but how strong\n"
	.string "you are as a Trainer has nothing to do\l"
	.string "with how young or old you are.$"

SootopolisCity_Gym_1F_Text_DaphneIntro:
	.string "Light has purpose, only in darkness.$"

SootopolisCity_Gym_1F_Text_DaphneDefeat:
	.string "You battled with more beauty than\n"
	.string "I could muster…$"

SootopolisCity_Gym_1F_Text_DaphnePostBattle:
	.string "The grace you bring to battle is\n"
	.string "fabulous.$"

SootopolisCity_Gym_1F_Text_BethanyIntro:
	.string "Get ready for your final challenge!$"

SootopolisCity_Gym_1F_Text_BethanyDefeat:
	.string "Oops!$"

SootopolisCity_Gym_1F_Text_BethanyPostBattle:
	.string "You are ready to fight Chal.\p"
	.string "Good luck, Trainer.$"

SootopolisCity_Gym_1F_Text_GymGuideAdvice:
	.string "Yo! How's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Sootopolis's Gym Leader Chal is\n"
	.string "an edgy Dark-type specialist.\p"
	.string "And, to get to Chal, you'll have to\n"
	.string "beat all these trainers!\p"
	.string "Listen, I'm sorry, but that's all the\n"
	.string "advice that I have for you.\p"
	.string "The rest of the way, you have to\n"
	.string "go for it yourself in the dark!$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
	.string "Yow! You've beaten even Chal, who was\n"
	.string "supposedly the strongest Gym Leader in\l"
	.string "Hoenn.\p"
	.string "Okay! Check out your Trainer Card.\p"
	.string "If you've gotten all the Badges, you're\n"
	.string "set for the Pokémon League challenge!$"

SootopolisCity_Gym_1F_Text_JuanIntro:
	.string "You beat all of them,\n"
	.string "now it's my turn!\p"
	.string "Let's see if your win streak ends here.$"

@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
@ the existence of that unused array of ints.
SootopolisCity_Gym_1F_Text_JuanDefeat:
	.string "Looks like you won.\p"
	.string "Take the Noir badge,\n"
	.string "you deserve it.$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
	.string "{PLAYER} received the Noir Badge\n"
	.string "from Chal.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
	.string "Chal: Having the Noir Badge shall\n"
	.string "assure you the full obedience of all\l"
	.string "your Pokémon to your every command.\p"
	.string "The Noir Badge also allows the use\n"
	.string "of the HM move Waterfall to scale\l"
	.string "walls of cascading water.\p"
	.string "Take this as well…$"

SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
	.string "Chal: TM151 contains Knock Off.\p"
	.string "It deals more damage if the enemy\n"
	.string "is holding an item, and then knocks it\l"
	.string "down.\p"
	.string "… … … … … …$"

SootopolisCity_Gym_1F_Text_RegisteredJuan:
	.string "Registered Gym Leader Chal\n"
	.string "in the PokéNav.$"

SootopolisCity_Gym_1F_Text_JuanPostBattle:
	.string "Chal: You have proved your worth,\n"
	.string "{PLAYER}.\p"
	.string "Travel to the easternmost reaches\n"
	.string "of Hoenn, to the island Ever Grande.\p"
	.string "There, you shall find the Pokémon\n"
	.string "League, your final challenge!$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
	.string "There remains but one Badge to\n"
	.string "obtain in Hoenn.\p"
	.string "If you wish to challenge the Pokémon\n"
	.string "League, you must obtain the last\l"
	.string "Badge from the Gym in Fortree.$"

SootopolisCity_Gym_1F_Text_GymStatue:
	.string "Sootopolis City Pokémon Gym\p"
	.string "Chal's certified Trainers:\n"
	.string "Wally$"

SootopolisCity_Gym_1F_Text_GymStatueCertified:
	.string "Sootopolis City Pokémon Gym\p"
	.string "Chal's certified Trainers:\n"
	.string "Wally and {PLAYER}$"

SootopolisCity_Gym_1F_Text_JuanPreRematch:
	.string "Chal: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\p"
	.string "I shall be delighted to dance with you\n"
	.string "as often as you wish!$"

SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
	.string "Ahahaha, you are the winner!\n"
	.string "You have defeated me again!$"

SootopolisCity_Gym_1F_Text_JuanPostRematch:
	.string "Chal: If I told you to become my\n"
	.string "apprentice, you will refuse, I am sure.\p"
	.string "I would like to make a gift of my coat\n"
	.string "to you.\p"
	.string "But again, you will refuse.\n"
	.string "I imagine that to be so.\p"
	.string "And that, my friend, is a certain sign\n"
	.string "of nobility!$"

SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
	.string "Chal: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\n"
	.string "I shall be delighted to dance with you…\p"
	.string "Ah, no, no, no.\n"
	.string "You have with you but one Pokémon.\p"
	.string "I wish that you would return with\n"
	.string "two, perhaps more, Pokémon, please.$"
