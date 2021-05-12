#ifndef SEBGINE_ENTITY_PLAYER_HPP
#define SEBGINE_ENTITY_PLAYER_HPP

#include <sebgine/entity/interfaces/Entity.hpp>
#include <sebgine/entity/interfaces/Updatable.hpp>
#include <sebgine/entity/interfaces/Viewable.hpp>
#include <sebgine/entity/interfaces/Controllable.hpp>

namespace seb
{
    class PlayerEntity: public Entity, public Updatable, public Viewable, public Controllable
    {
        public:
            virtual void tick(sf::RenderWindow* window);
            virtual void consumeEvent(sf::Event event) = 0;

        protected:
            virtual void update() = 0;
            virtual void input(sf::RenderWindow* window) = 0;
            virtual void render(sf::RenderWindow* window) = 0;
    };
}

#endif
