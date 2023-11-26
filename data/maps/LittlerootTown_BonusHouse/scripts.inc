LittlerootTown_BonusHouse_MapScripts::
	.byte 0

LittlerootTown_BonusHouse_EventScript_Oldman::
	lock
	faceplayer
	switch VAR_OLD_MAN_QUEST
	case 7, LittlerootTown_BonusHouse_EventScript_Oldman_Final
	msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_Intro, MSGBOX_DEFAULT
	switch VAR_OLD_MAN_QUEST
	case 0, LittlerootTown_BonusHouse_EventScript_Oldman_01
	case 1, LittlerootTown_BonusHouse_EventScript_Oldman_02
	case 2, LittlerootTown_BonusHouse_EventScript_Oldman_03
	case 3, LittlerootTown_BonusHouse_EventScript_Oldman_04
	case 4, LittlerootTown_BonusHouse_EventScript_Oldman_05
	case 5, LittlerootTown_BonusHouse_EventScript_Oldman_06
	case 6, LittlerootTown_BonusHouse_EventScript_Oldman_07
	end

LittlerootTown_BonusHouse_EventScript_Oldman_01::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_01, MSGBOX_DEFAULT
	checkforspecies SPECIES_WURMPLE, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_01_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_01_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 1
	setvar VAR_OLD_MAN_QUEST 1
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_02::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_02, MSGBOX_DEFAULT
	checkforspecies SPECIES_MURKROW, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_02_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_02_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	setvar VAR_OLD_MAN_QUEST 2
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_03::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_03, MSGBOX_DEFAULT
	checkforspecies SPECIES_WHISMUR, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_03_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_03_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 3
	setvar VAR_OLD_MAN_QUEST 3
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_04::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_04, MSGBOX_DEFAULT
	checkforspecies SPECIES_ARON, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_04_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_04_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	setvar VAR_OLD_MAN_QUEST 4
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_05::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_05, MSGBOX_DEFAULT
	checkforspecies SPECIES_YANMA, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_05_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_05_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 5
	setvar VAR_OLD_MAN_QUEST 5
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_06::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_06, MSGBOX_DEFAULT
	checkforspecies SPECIES_WHISCASH, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_06_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_06_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 6
	setvar VAR_OLD_MAN_QUEST 6
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_07::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_07, MSGBOX_DEFAULT
	checkforspecies SPECIES_DRAGONAIR, NO_PARTY_SCREEN, LittlerootTown_BonusHouse_EventScript_Oldman_07_Validate
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_07_Validate::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 7
	setvar VAR_OLD_MAN_QUEST 7
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_Final::
    msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_Final, MSGBOX_DEFAULT
    release
    end

LittlerootTown_BonusHouse_EventScript_Oldman_Text_Intro:
	.string "I too was a renowned trainer\n"
	.string "in my younger years!\p"
	.string "But due to a knee injury, these\n"
	.string "days I can't travel anywhere at all.\p"
	.string "Oh, what I'd give to see some\n"
	.string "beautiful POKéMONs again!$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_01:
	.string "I'd love to see a WURMPLE!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_02:
	.string "I'd love to see a MURKROW!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_03:
	.string "I'd love to see a WHISMUR!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_04:
	.string "I'd love to see an ARON!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_05:
	.string "I'd love to see a YANMA!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_06:
	.string "I'd love to see a WHISCASH!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_07:
	.string "I'd love to see a DRAGONAIR!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_08:
	.string "I'd love to see an AERODACTYL!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_09:
	.string "I'd love to see a SCYTHER!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_10:
	.string "I'd love to see a DUSKNOIR!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_11:
	.string "I'd love to see a RELICANTH!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_12:
	.string "I'd love to see a GLISCOR!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_13:
	.string "I'd love to see a LAPRAS!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_14:
	.string "I'd love to see a SNORLAX!\n"
	.string "Do you think you could bring me one?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_15:
	.string "I'd love to see JIRACHI,\n"
	.string "the mythical POKéMON...\p"
	.string "This is no simple task, but do you\n"
	.string "think you could show it to me?$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMy:
	.string "Oh my! You've actually got one!\p"
	.string "It's absolutely beautiful!\n"
	.string "Such a sight for the eyes!\p"
	.string "Thank you so much for taking the time!\p"
	.string "Here, it's not that much, but I want\n"
	.string "you to have this.$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_OhMyJirachi:
	.string "Oh.\p"
	.string "Oh my. I can't believe this.\p"
	.string "You really did bring me JIRACHI,\n"
	.string "the WISH POKéMON ?\p"
	.string "This is such a precious moment for me.\p"
	.string "I've been searching my whole life\n"
	.string "for this magical POKéMON!\p"
	.string "I can't thank you enough for that.\n"
	.string "I want you to have this.$"

LittlerootTown_BonusHouse_EventScript_Oldman_Text_Final:
	.string "Thank you for finding the time to\n"
	.string "help an old man.\p"
	.string "It may not be a lot for you, but\n"
	.string "it means the whole world to me.$"
