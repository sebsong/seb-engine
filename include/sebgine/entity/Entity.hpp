#ifndef SEBGINE_ENTITY_HPP
#define SEBGINE_ENTITY_HPP

#include<SFML/Graphics/RenderWindow.hpp>
#include<SFML/Window/Event.hpp>

namespace seb
{
    class Entity
    {
        public:
            void tick(sf::Event* event, sf::RenderWindow* window);

        protected:
            virtual void update(sf::Event* event, sf::RenderWindow* window);
    };
}

#endif