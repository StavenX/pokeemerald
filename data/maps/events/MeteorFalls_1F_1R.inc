MeteorFalls_1F_1R_MapObjects: @ 8533F74
	object_event 1, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 2, 4, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911AB, 1044, 0, 0
	object_event 2, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 2, 14, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911C5, 1046, 0, 0
	object_event 3, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 27, 5, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911B8, 1045, 0, 0
	object_event 4, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 26, 32, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911D2, 1047, 0, 0
	object_event 5, MAP_OBJ_GFX_MAGMA_MEMBER_M, 0, 0, 12, 20, 3, 8, 0, 0, 0, 0, 0x0, 939, 0, 0
	object_event 6, MAP_OBJ_GFX_MAGMA_MEMBER_M, 0, 0, 14, 21, 3, 9, 0, 0, 0, 0, 0x0, 939, 0, 0
	object_event 7, MAP_OBJ_GFX_ARCHIE, 0, 0, 6, 20, 3, 10, 0, 0, 0, 0, 0x0, 938, 0, 0
	object_event 8, MAP_OBJ_GFX_AQUA_MEMBER_M, 0, 0, 6, 20, 3, 10, 0, 0, 0, 0, 0x0, 938, 0, 0
	object_event 9, MAP_OBJ_GFX_AQUA_MEMBER_M, 0, 0, 6, 21, 3, 1, 0, 0, 0, 0, 0x0, 938, 0, 0
	object_event 10, MAP_OBJ_GFX_SCIENTIST_1, 0, 0, 13, 23, 3, 21, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_22BF25, 942, 0, 0

MeteorFalls_1F_1R_MapWarps: @ 8534064
	warp_def 27, 18, 4, 0, ROUTE_114
	warp_def 6, 39, 3, 0, ROUTE_115
	warp_def 10, 3, 3, 0, METEOR_FALLS_1F_2R
	warp_def 5, 4, 3, 4, METEOR_FALLS_B1F_1R
	warp_def 26, 28, 3, 5, METEOR_FALLS_B1F_1R
	warp_def 4, 2, 0, 0, METEOR_FALLS_STEVENS_CAVE

MeteorFalls_1F_1R_MapCoordEvents: @ 8534094
	coord_event 14, 18, 4, 0, VAR_0x40BF, 0, 0, MeteorFalls_1F_1R_EventScript_22BD5F

MeteorFalls_1F_1R_MapBGEvents: @ 85340A4
	bg_event 9, 58, 0, 0, 0, 0x0

MeteorFalls_1F_1R_MapEvents:: @ 85340B0
	map_events MeteorFalls_1F_1R_MapObjects, MeteorFalls_1F_1R_MapWarps, MeteorFalls_1F_1R_MapCoordEvents, MeteorFalls_1F_1R_MapBGEvents

