DewfordTown_Mart_MapScripts::
	.byte 0

DewfordTown_Mart_EventScript_Clerk1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart DewfordTown_Mart_Pokemart1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
DewfordTown_Mart_Pokemart1:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE
	release
	end

DewfordTown_Mart_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart DewfordTown_Mart_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
DewfordTown_Mart_Pokemart2:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE
	release
	end

