#include <sebgine/entity/EntityManager.hpp>

namespace seb
{
    EntityManager::EntityManager()
    {
        this->entities = new std::vector<Entity*>();
    }

    void EntityManager::registerEntity(Entity* entity)
    {
        entities->push_back(entity);
    }

    void EntityManager::tick(sf::RenderWindow* window)
    {
        for (Entity* entity : *entities)
        {
            if (entity->enabled())
            {
                entity->tick(window);
            }
        }
    }
}
