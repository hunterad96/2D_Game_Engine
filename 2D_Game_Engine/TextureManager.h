#pragma once

#include "game.h"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* pFileName, SDL_Renderer* pRenderer);
    
};
