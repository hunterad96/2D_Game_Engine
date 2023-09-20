#pragma once

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <iostream>

class Game {
public:
    Game();
    ~Game();

    void init(const char* pTitle, int pXpos, int pYpos, int pWidth, int pHeight, bool Pfullscreen);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running();

private:
    int count = 0;
    bool isRunning;
    SDL_Window* window;
    SDL_Renderer* renderer;
};
