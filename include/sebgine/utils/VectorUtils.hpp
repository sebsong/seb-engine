#ifndef SEBGINE_UTILS_VECTOR_HPP
#define SEBGINE_UTILS_VECTOR_HPP

#include <SFML/System.hpp>

namespace seb
{
    template <typename T>
    float getVectorMagnitude(const sf::Vector2<T>& vector)
    {
        return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
    }
}

#endif