#ifndef SEBGINE_ENTITY_ENTITY_MANAGER_HPP
#define SEBGINE_ENTITY_ENTITY_MANAGER_HPP

#include <sebgine/entity/interfaces/Entity.hpp>

#include <SFML/Graphics/RenderWindow.hpp>

namespace seb
{
    class EntityManager
    {
        public:
            EntityManager();
            void registerEntity(Entity* entity);
            void tick(sf::RenderWindow* window);

        private:
            std::vector<Entity*>* entities;
    };
}

#endif
