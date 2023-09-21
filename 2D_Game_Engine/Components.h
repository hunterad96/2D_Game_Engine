#pragma once

#include "ECS.h"

class PositionComponent : public Component
{
private:
    int xPos, yPos;
    
public:
    int x() { return xPos; }
    int y() { return yPos; }
    
    void init() override
    {
        xPos = 0;
        yPos = 0;
    }
    
    void update() override
    {
        xPos++;
        yPos++;
    }
    
    void setPos(int pX, int pY)
    {
        xPos = pX;
        yPos = pY;
    }
    
};
