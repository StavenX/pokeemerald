MauvilleCity_PokemonCenter_2F_MapObjects: @ 853026C
	object_event 1, MAP_OBJ_GFX_TEALA, 0, 0, 6, 2, 0, 8, 17, 0, 0, 0, MauvilleCity_PokemonCenter_2F_EventScript_27375B, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_TEALA, 0, 0, 2, 2, 3, 8, 17, 0, 0, 0, MauvilleCity_PokemonCenter_2F_EventScript_273761, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_TEALA, 0, 0, 10, 2, 0, 8, 17, 0, 0, 0, MauvilleCity_PokemonCenter_2F_EventScript_273767, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_MYSTERY_GIFT_MAN, 0, 0, 1, 2, 0, 8, 17, 0, 0, 0, MauvilleCity_PokemonCenter_2F_EventScript_276B03, 702, 0, 0
	object_event 5, MAP_OBJ_GFX_YOUNGSTER, 0, 0, 8, 8, 3, 7, 17, 0, 0, 0, MauvilleCity_PokemonCenter_2F_EventScript_21102F, 0, 0, 0

MauvilleCity_PokemonCenter_2F_MapWarps: @ 85302E4
	warp_def 1, 6, 4, 2, MAUVILLE_CITY_POKEMON_CENTER_1F
	warp_def 5, 1, 3, 0, UNION_ROOM
	warp_def 9, 1, 3, 0, TRADE_CENTER

MauvilleCity_PokemonCenter_2F_MapEvents:: @ 85302FC
	map_events MauvilleCity_PokemonCenter_2F_MapObjects, MauvilleCity_PokemonCenter_2F_MapWarps, 0x0, 0x0

