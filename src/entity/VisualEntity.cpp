
#include <sebgine/entity/VisualEntity.hpp>

namespace seb
{
    void VisualEntity::tick(sf::Event* event, sf::RenderWindow* window)
    {
        update(event, window);
        render(window);
    }
}