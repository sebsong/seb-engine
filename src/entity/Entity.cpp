#include <sebgine/entity/Entity.hpp>

namespace seb
{
    void Entity::tick(sf::RenderWindow* window)
    {
        update();
    }
}
