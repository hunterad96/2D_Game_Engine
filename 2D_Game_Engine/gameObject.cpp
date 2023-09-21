#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* pTextureSheet, int pXpos, int pYpos)
{
    objectTexture = TextureManager::LoadTexture(pTextureSheet);
    
    xPos = pXpos;
    yPos = pYpos;
}

void GameObject::Update()
{
    xPos++;
    yPos++;
    
    srcRect.h = 32;
    srcRect.w = 32;
    srcRect.x = 0;
    srcRect.y = 0;
    
    destRect.h = srcRect.h * 2;
    destRect.w = srcRect.w * 2;
    destRect.x = xPos;
    destRect.y = yPos;
}

void GameObject::Render()
{
    SDL_RenderCopy(Game::renderer, objectTexture, &srcRect, &destRect);
}
