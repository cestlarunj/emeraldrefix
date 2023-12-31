SlateportCity_Mart_MapScripts::
	.byte 0

SlateportCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

SlateportCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Mart_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Mart_Pokemart2:
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_CHARCOAL
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_HARD_STONE
	.2byte ITEM_MAGNET
	.2byte ITEM_METAL_COAT
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_NONE
	release
	end

SlateportCity_Mart_EventScript_BlackBelt::
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end

SlateportCity_Mart_EventScript_Man::
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end

SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
	.string "The MARKET does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a POKéMON MART.$"

SlateportCity_Mart_Text_GreatBallIsBetter:
	.string "A GREAT BALL is better than a POKé BALL\n"
	.string "at catching POKéMON.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive POKéMON…$"

