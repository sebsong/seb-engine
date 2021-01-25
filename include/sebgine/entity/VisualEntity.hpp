#ifndef SEBGINE_ENTITY_VISUAL_HPP
#define SEBGINE_ENTITY_VISUAL_HPP

#include <sebgine/entity/Entity.hpp>

namespace seb
{
    class VisualEntity: public Entity
    {
        public:
            virtual void tick();

        protected:
            virtual void render();
    };
}

#endif