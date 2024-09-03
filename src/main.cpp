#include <SFML/Graphics.hpp>

#include "World.h"
#include "Carbon.h"

int main()
{

    World world {};
    // Add objects to wrold here

    Carbon carbon {&world};

    carbon.start();


    // REMOVE EVERYTHING BELOW AND MAKE carbon.start() THE MAIN LOOP
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Carbon2D" };
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
