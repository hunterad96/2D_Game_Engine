#pragma once

#include "game.h"

class Map {
    
public:
    Map();
    ~Map();
    
    void loadMap();
    void drawMap();
    
private:
    SDL_Rect srcRect, destRect;
    SDL_Texture *dirt;
    SDL_Texture *grass;
    SDL_Texture *water;
    
    int map[20][25];
    
};
