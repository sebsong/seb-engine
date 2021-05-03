#ifndef SEBGINE_ENTITY_CONTROLLABLE_HPP
#define SEBGINE_ENTITY_CONTROLLABLE_HPP

#include <sebgine/entity/VisualEntity.hpp>

namespace seb
{
    class ControllableEntity: public VisualEntity
    {
        public:
            virtual void tick(sf::RenderWindow* window);
            virtual void consumeEvent(sf::Event event) = 0;

        protected:
            virtual void input(sf::RenderWindow* window) = 0;
    };
}

#endif