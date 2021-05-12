
#include <sebgine/entity/PlayerEntity.hpp>

namespace seb
{
    void PlayerEntity::tick(sf::RenderWindow* window)
    {
        input(window);
        update();
        render(window);
    }
}