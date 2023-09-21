#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* pFileName)
{
    SDL_Surface* tempSurface = IMG_Load(pFileName);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    
    return texture;
}
