#pragma once

#include <glm/glm.hpp>
#include "map_slice.hpp"

class SelectionHandler {
    // stores the tiles currently being held
    MapSlice selection_buffer;
    // stores tiles underneath the current selection data
    MapSlice temp_buffer;

    // location where current selection was originally from
    glm::ivec3 orig_pos {-1, -1, -1};
    // current selection location
    glm::ivec2 start_pos = {-1, -1};
    glm::ivec2 _size = {0, 0};
    glm::ivec2 room_pos = {-1, -1};

  public:
    void drag_begin(glm::ivec2 pos);
    void drag_end(glm::ivec2 pos);

    void drag_begin_room(glm::ivec2 pos);
    void drag_end_room(glm::ivec2 pos);

    // sets area and copies underlying data
    void start_from_paste(glm::ivec2 pos, const MapSlice& data);

    // apply changes without deselecting
    void apply();
    // apply changes and deselect
    void release();
    void release_room();

    void erase();
    void cut();

    // move selection to different layer
    void change_layer(int from, int to);

    void move(glm::ivec2 delta);

    bool ignore_air = true;
    bool selecting() const;
    bool holding() const;
    bool holding_room() const;
    bool contains(glm::ivec2 pos) const;
    glm::ivec3 start() const;
    glm::ivec2 size() const;
    glm::ivec2 room() const;
};

inline SelectionHandler selection_handler;
