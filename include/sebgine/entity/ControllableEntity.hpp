#ifndef SEBGINE_ENTITY_CONTROLLABLE_HPP
#define SEBGINE_ENTITY_CONTROLLABLE_HPP

#include <sebgine/entity/VisualEntity.hpp>

namespace seb
{
    class ControllableEntity: public VisualEntity
    {
        public:
            virtual void tick(sf::RenderWindow* window, std::vector<sf::Event*> events);

        protected:
            virtual void input(std::vector<sf::Event*> events) = 0;
    };
}

#endif