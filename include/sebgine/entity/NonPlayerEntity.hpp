#ifndef SEBGINE_ENTITY_VISUAL_HPP
#define SEBGINE_ENTITY_VISUAL_HPP

#include <sebgine/entity/interfaces/Entity.hpp>
#include <sebgine/entity/interfaces/Updatable.hpp>
#include <sebgine/entity/interfaces/Viewable.hpp>

namespace seb
{
    class NonPlayerEntity: public Entity, public Updatable, public Viewable
    {
        public:
            virtual void tick(sf::RenderWindow* window);

        protected:
            virtual void update() = 0;
            virtual void render(sf::RenderWindow* window) = 0;
    };
}

#endif
