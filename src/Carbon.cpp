#include "Carbon.h"

#include <SFML/Graphics.hpp>

World* Carbon::getWorld()
{
    return m_world;
}

void Carbon::setWorld(World* world) 
{
    m_world = world;
}

void Carbon::start() 
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Carbon2D" };
    window.setFramerateLimit(60);

    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Time dt = clock.restart();
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        m_world->Step(dt.asSeconds());

        window.clear();
        window.display();
    }
}