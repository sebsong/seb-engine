
#include <sebgine/entity/ControllableEntity.hpp>

namespace seb
{
    void ControllableEntity::tick(sf::RenderWindow* window)
    {
        input(window);
        update();
        render(window);
    }
}