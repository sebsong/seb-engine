
#include <sebgine/entity/ControllableEntity.hpp>

namespace seb
{
    void ControllableEntity::tick(sf::RenderWindow* window, std::vector<sf::Event*> events)
    {
        input(events);
        update();
        render(window);
    }
}