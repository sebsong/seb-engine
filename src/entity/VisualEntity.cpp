
#include <sebgine/entity/VisualEntity.hpp>

namespace seb
{
    void VisualEntity::tick(sf::RenderWindow* window)
    {
        update();
        render(window);
    }
}