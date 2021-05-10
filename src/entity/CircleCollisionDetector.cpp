#include <sebgine/entity/CircleCollisionDetector.hpp>

#include <sebgine/entity/CircleCollidable.hpp>
#include <sebgine/utils/VectorUtils.hpp>

#include <iostream>

namespace seb
{
    CircleCollisionDetector::CircleCollisionDetector(std::vector<CircleCollidable*>* collidables)
    {
        this->collidables = collidables;
    }

    void CircleCollisionDetector::detect()
    {
        for (CircleCollidable* collidable : *collidables)
        {
            for (CircleCollidable* otherCollidable : *collidables)
            {
                if (collidable == otherCollidable)
                {
                    continue;
                }

                sf::CircleShape* circle = collidable->getCircleShape();
                sf::CircleShape* otherCircle = otherCollidable->getCircleShape();

                float circleDistance = getVectorMagnitude(circle->getPosition() - otherCircle->getPosition());
                float radiiSum = circle->getRadius() + otherCircle->getRadius();
                
                if (circleDistance <= radiiSum)
                {
                    collidable->handleCollision(otherCollidable);
                    otherCollidable->handleCollision(collidable);
                }

            }
        }
    }
}
