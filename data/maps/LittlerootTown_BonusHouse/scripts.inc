LittlerootTown_BonusHouse_MapScripts::
	.byte 0


LittlerootTown_BonusHouse_EventScript_Oldman::
	lockall
	msgbox LittlerootTown_BonusHouse_EventScript_Oldman_Text_0, MSGBOX_NPC
	releaseall
	return


LittlerootTown_BonusHouse_EventScript_Oldman_Text_0:
	.string "Hello World !$"
