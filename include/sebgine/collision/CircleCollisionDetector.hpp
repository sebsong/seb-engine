#ifndef SEBGINE_COLLISION_COLLISION_DETECTOR_HPP
#define SEBGINE_COLLISION_COLLISION_DETECTOR_HPP

#include <sebgine/collision/interfaces/CircleCollidable.hpp>

#include <SFML/Graphics.hpp>

namespace seb
{
    class CircleCollisionDetector
    {
        public:
            CircleCollisionDetector();
            void registerCollidable(CircleCollidable* collidable);
            void detect();

        private:
            std::vector<CircleCollidable*>* collidables;
    };
}

#endif
