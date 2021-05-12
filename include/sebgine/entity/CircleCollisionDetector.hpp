#ifndef SEBGINE_ENTITY_COLLISION_DETECTOR_HPP
#define SEBGINE_ENTITY_COLLISION_DETECTOR_HPP

#include <sebgine/entity/CircleCollidable.hpp>

#include <SFML/Graphics.hpp>


namespace seb
{
    class CircleCollisionDetector
    {
        public:
            CircleCollisionDetector(std::vector<CircleCollidable*>* collidables);
            void detect();

        private:
            std::vector<CircleCollidable*>* collidables;
    };
}

#endif
