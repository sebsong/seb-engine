#ifndef SEBGINE_ENTITY_COLLIDABLE_HPP
#define SEBGINE_ENTITY_COLLIDABLE_HPP

#include <SFML/Graphics.hpp>

namespace seb
{
    class CircleCollidable
    {
        public:
            virtual sf::CircleShape* getCircleShape() = 0;
            virtual void handleCollision(CircleCollidable* otherCollidable) = 0;
    };
}

#endif