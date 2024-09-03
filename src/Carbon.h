#pragma once

#include "World.h"

class Carbon
{
private:
    World* m_world;

public:
    Carbon(World* world):
    m_world {world}
    {

    }

    Carbon(){}

    World* getWorld();
    void setWorld(World* world);

    void start();
};