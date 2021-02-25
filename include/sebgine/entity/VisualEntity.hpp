#ifndef SEBGINE_ENTITY_VISUAL_HPP
#define SEBGINE_ENTITY_VISUAL_HPP

#include <sebgine/entity/Entity.hpp>

namespace seb
{
    class VisualEntity: public Entity
    {
        public:
            virtual void tick(sf::RenderWindow* window, std::vector<sf::Event*> events);

        protected:
            virtual void render(sf::RenderWindow* window) = 0;
    };
}

#endif