RustboroCity_PokemonCenter_1F_EventObjects:: @ 8388B24
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 7, 2, 3, 8, 0, 0, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_157B88, 0
	object_event 2, EVENT_OBJ_GFX_MAN_1, 0, 11, 2, 3, 9, 0, 0, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_157B96, 0
	object_event 3, EVENT_OBJ_GFX_BOY_1, 0, 3, 4, 3, 2, 1, 1, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_157B9F, 0
	object_event 4, EVENT_OBJ_GFX_GIRL_3, 0, 10, 6, 3, 10, 0, 0, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_157BA8, 0

RustboroCity_PokemonCenter_1F_MapWarps:: @ 8388B84
	warp_def 7, 8, 3, 3, MAP_RUSTBORO_CITY
	warp_def 6, 8, 3, 3, MAP_RUSTBORO_CITY
	warp_def 1, 6, 4, 0, MAP_RUSTBORO_CITY_POKEMON_CENTER_2F

RustboroCity_PokemonCenter_1F_MapEvents:: @ 8388B9C
	map_events RustboroCity_PokemonCenter_1F_EventObjects, RustboroCity_PokemonCenter_1F_MapWarps, 0x0, 0x0