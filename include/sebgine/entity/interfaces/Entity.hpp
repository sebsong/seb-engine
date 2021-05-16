#ifndef SEBGINE_ENTITY_ENTITY_HPP
#define SEBGINE_ENTITY_ENTITY_HPP

#include <SFML/Graphics/RenderWindow.hpp>

namespace seb
{
    class Entity
    {
        public:
            virtual void tick(sf::RenderWindow* window) = 0;
            bool& enabled() {return _enabled;}
            const bool& enabled() const {return _enabled;}

        private:
            bool _enabled = true;
    };
}

#endif
