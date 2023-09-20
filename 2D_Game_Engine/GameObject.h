#pragma once

#include "game.h"

class GameObject {
public:
    GameObject(const char* pTextureSheet, SDL_Renderer* pRenderer, int pXpos, int pYpos);
    ~GameObject();
    
    void Update();
    void Render();
    
private:
    int xPos, yPos;
    
    SDL_Texture* objectTexture;
    SDL_Rect srcRect, destRect;
    SDL_Renderer* renderer;
};
