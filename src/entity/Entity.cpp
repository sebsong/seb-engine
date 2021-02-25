#include <sebgine/entity/Entity.hpp>

namespace seb
{
    void Entity::tick(sf::RenderWindow* window, std::vector<sf::Event*> events)
    {
        update();
    }
}