#ifndef SEBGINE_ENTITY_UPDATABLE_HPP
#define SEBGINE_ENTITY_UPDATABLE_HPP

namespace seb
{
    class Updatable
    {
        public:
            virtual void update() = 0;
    };
}

#endif