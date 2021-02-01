#include <sebgine/entity/Entity.hpp>

namespace seb
{
    void Entity::tick(sf::Event* event, sf::RenderWindow* window)
    {
        update(event, window);
    }
}