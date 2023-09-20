#include "game.h"

SDL_Texture* playerTexture;
SDL_Rect srcRect, destRect;

Game::Game()
{

}

Game::~Game()
{

}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{

    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
        
        renderer = SDL_CreateRenderer(window, -1, 0);
        
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        }
        
        isRunning = true;
    }
    
    SDL_Surface* tempSurface = IMG_Load("assets/Knight.png");
    
    playerTexture = SDL_CreateTextureFromSurface(renderer, tempSurface);
    
    //Clean up temporary surface pointer
    SDL_FreeSurface(tempSurface);
}

void Game::handleEvents()
{
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
        break;

    default:
        break;
    }
}

void Game::update()
{
    count++;
    std::cout << count << std::endl;
    
    destRect.h = 32;
    destRect.w = 32;
    destRect.x = count%800;
}

void Game::render()
{
    SDL_RenderClear(renderer);
    
    SDL_RenderCopy(renderer, playerTexture, NULL, &destRect);

    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

    std::cout << "Game Cleaned!" << std::endl;
}

bool Game::running()
{
    return isRunning;
}