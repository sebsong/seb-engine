#ifndef SEBGINE_UTILS_VECTOR_HPP
#define SEBGINE_UTILS_VECTOR_HPP

#include <cmath>

#include <SFML/System.hpp>

namespace seb
{
    template <typename T>
    float getVectorMagnitude(const sf::Vector2<T>& vector)
    {
        return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
    }

    template <class T>
    static sf::Vector2<T> getNormalizedVector(const sf::Vector2<T>& vector)
    {
        float magnitude{getVectorMagnitude(vector)};
        if (magnitude == 0)
        {
            return vector;
        }

        return vector / magnitude;
    }

}

#endif
