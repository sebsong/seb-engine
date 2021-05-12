#ifndef SEBGINE_ENTITY_STATIC_HPP
#define SEBGINE_ENTITY_STATIC_HPP

#include <sebgine/entity/interfaces/Entity.hpp>
#include <sebgine/entity/interfaces/Viewable.hpp>

namespace seb
{
    class StaticEntity: public Entity, public Viewable
    {
        public:
            virtual void tick(sf::RenderWindow* window) = 0;

        protected:
            virtual void render(sf::RenderWindow* window) = 0;

    };
}

#endif
