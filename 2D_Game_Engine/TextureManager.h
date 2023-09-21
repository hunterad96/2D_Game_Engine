#pragma once

#include "game.h"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* pFileName);
    static void draw(SDL_Texture *pTexture, SDL_Rect pSrcRect, SDL_Rect pDestRect);
};
