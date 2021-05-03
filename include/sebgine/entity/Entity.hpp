#ifndef SEBGINE_ENTITY_HPP
#define SEBGINE_ENTITY_HPP

#include<SFML/Graphics/RenderWindow.hpp>
#include<SFML/Window/Event.hpp>

namespace seb
{
    class Entity
    {
        public:
            void tick(sf::RenderWindow* window);

        protected:
            virtual void update() = 0;
    };
}

#endif