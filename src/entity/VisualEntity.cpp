
#include <sebgine/entity/VisualEntity.hpp>

namespace seb
{
    void VisualEntity::tick(sf::RenderWindow* window, std::vector<sf::Event*> events)
    {
        update();
        render(window);
    }
}