#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* pFileName)
{
    SDL_Surface* tempSurface = IMG_Load(pFileName);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    
    return texture;
}

void TextureManager::draw(SDL_Texture *pTexture, SDL_Rect pSrcRect, SDL_Rect pDestRect)
{
    SDL_RenderCopy(Game::renderer, pTexture, &pSrcRect, &pDestRect);
}
