#ifndef SEBGINE_UTILS_VECTOR_HPP
#define SEBGINE_UTILS_VECTOR_HPP

#include <SFML/System.hpp>

namespace seb
{
    template <class T>
    float getVectorMagnitude(const sf::Vector2<T>& vector);
}

#endif