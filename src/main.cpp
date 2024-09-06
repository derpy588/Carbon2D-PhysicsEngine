#include <SFML/Graphics.hpp>

#include "World.h"
#include "Carbon.h"

int main()
{

    World world {};
    // Add objects to wrold here
    Object obj1{{0, 0}, {0, 0}, {0, 0}, 1.0f};
    Object obj2{{60, 0}, {0, 0}, {0, 0}, 10.0f};

    world.AddObject(&obj1);
    world.AddObject(&obj2);

    Carbon carbon {&world};

    carbon.start();


    
}
