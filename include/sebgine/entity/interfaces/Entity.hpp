#ifndef SEBGINE_ENTITY_HPP
#define SEBGINE_ENTITY_HPP

#include<SFML/Graphics/RenderWindow.hpp>
#include<SFML/Window/Event.hpp>

namespace seb
{
    class Entity
    {
        public:
            virtual void tick(sf::RenderWindow* window) = 0;
    };
}

#endif
