
#include <sebgine/entity/NonPlayerEntity.hpp>

namespace seb
{
    void NonPlayerEntity::tick(sf::RenderWindow* window)
    {
        update();
        render(window);
    }
}
