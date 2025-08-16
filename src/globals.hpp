#pragma once

#include "game_data.hpp"
#include "map_slice.hpp"

inline int selectedMap = 0;
inline bool updateGeometry = false;
inline GameData game_data;
inline std::string exportPath;

// 0 = forground, 1 = background
inline uint8_t mode1_layer = 0;

// stores copied map tiles
inline MapSlice clipboard;

inline Map& currentMap() {
    assert(selectedMap >= 0 && selectedMap < game_data.maps.size());
    return game_data.maps[selectedMap];
}
