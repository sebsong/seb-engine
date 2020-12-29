#include <SFML/System.hpp>

namespace seb
{
    template <class T>
    float getVectorMagnitude(const sf::Vector2<T>& vector)
    {
        return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
    }
}