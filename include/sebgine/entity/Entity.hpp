
#ifndef SEBGINE_ENTITY_HPP
#define SEBGINE_ENTITY_HPP

namespace seb
{
    class Entity
    {
        public:
            void tick();

        protected:
            virtual void update();
    };
}

#endif