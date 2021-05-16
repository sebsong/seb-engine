#ifndef SEBGINE_ENTITY_CONTROLLABLE_HPP
#define SEBGINE_ENTITY_CONTROLLABLE_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

namespace seb
{
    class Controllable
    {
        public:
            virtual void consumeEvent(sf::Event event) = 0;

        protected:
            virtual void input(sf::RenderWindow* window) = 0;
    };
}

#endif
