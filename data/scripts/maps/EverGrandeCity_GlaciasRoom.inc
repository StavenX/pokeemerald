EverGrandeCity_GlaciasRoom_MapScripts:: @ 8228412
	map_script 2, EverGrandeCity_GlaciasRoom_MapScript2_228431
	map_script 1, EverGrandeCity_GlaciasRoom_MapScript1_228448
	map_script 4, EverGrandeCity_GlaciasRoom_MapScript2_228422
	.byte 0

EverGrandeCity_GlaciasRoom_MapScript2_228422: @ 8228422
	map_script_2 VAR_0x4001, 0, EverGrandeCity_GlaciasRoom_EventScript_22842C
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_22842C:: @ 822842C
	turnobject 255, 2
	end

EverGrandeCity_GlaciasRoom_MapScript2_228431: @ 8228431
	map_script_2 VAR_0x409C, 2, EverGrandeCity_GlaciasRoom_EventScript_22843B
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_22843B:: @ 822843B
	lockall
	call EverGrandeCity_GlaciasRoom_EventScript_272475
	setvar VAR_0x409C, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_MapScript1_228448: @ 8228448
	checkflag FLAG_0x4FD
	call_if 1, EverGrandeCity_GlaciasRoom_EventScript_22845D
	compare VAR_0x409C, 3
	call_if 1, EverGrandeCity_GlaciasRoom_EventScript_228463
	end

EverGrandeCity_GlaciasRoom_EventScript_22845D:: @ 822845D
	call EverGrandeCity_GlaciasRoom_EventScript_2724BC
	return

EverGrandeCity_GlaciasRoom_EventScript_228463:: @ 8228463
	call EverGrandeCity_GlaciasRoom_EventScript_27255F
	return

EverGrandeCity_GlaciasRoom_EventScript_228469:: @ 8228469
	lock
	faceplayer
	checkflag FLAG_0x4FD
	goto_eq EverGrandeCity_GlaciasRoom_EventScript_228490
	playbgm MUS_SITENNOU, 0
	msgbox EverGrandeCity_GlaciasRoom_Text_2284AC, 4
	trainerbattle 3, TRAINER_GLACIA, 0, EverGrandeCity_GlaciasRoom_Text_2285B4
	goto EverGrandeCity_GlaciasRoom_EventScript_22849A
	end

EverGrandeCity_GlaciasRoom_EventScript_228490:: @ 8228490
	msgbox EverGrandeCity_GlaciasRoom_Text_228640, 4
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_22849A:: @ 822849A
	setflag FLAG_0x4FD
	call EverGrandeCity_GlaciasRoom_EventScript_2723F8
	msgbox EverGrandeCity_GlaciasRoom_Text_228640, 4
	release
	end

EverGrandeCity_GlaciasRoom_Text_2284AC: @ 82284AC
	.string "Welcome, my name is GLACIA\n"
	.string "of the ELITE FOUR.\p"
	.string "I’ve traveled from afar to HOENN\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak TRAINERS and their POKéMON.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

EverGrandeCity_GlaciasRoom_Text_2285B4: @ 82285B4
	.string "You and your POKéMON…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It’s no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_228640: @ 8228640
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the POKéMON LEAGUE.$"

