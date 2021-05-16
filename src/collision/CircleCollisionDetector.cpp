#include <sebgine/collision/CircleCollisionDetector.hpp>

#include <sebgine/utils/VectorUtils.hpp>

namespace seb
{
    CircleCollisionDetector::CircleCollisionDetector()
    {
        this->collidables = new std::vector<CircleCollidable*>();
    }

    void CircleCollisionDetector::registerCollidable(CircleCollidable* collidable)
    {
        collidables->push_back(collidable);
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
