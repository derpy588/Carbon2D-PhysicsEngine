#include <SFML/Graphics.hpp>

#include "World.h"
#include "Carbon.h"

int main()
{

    World world {};
    // Add objects to wrold here

    Carbon carbon {&world};

    carbon.start();


    
}
