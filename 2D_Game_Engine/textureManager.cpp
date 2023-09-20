#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* pFileName, SDL_Renderer *pRenderer)
{
    SDL_Surface* tempSurface = IMG_Load(pFileName);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(pRenderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    
    return texture;
}
