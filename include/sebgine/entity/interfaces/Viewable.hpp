#ifndef SEBGINE_ENTITY_VIEWABLE_HPP
#define SEBGINE_ENTITY_VIEWABLE_HPP

#include<SFML/Graphics/RenderWindow.hpp>

namespace seb
{
    class Viewable
    {
        protected:
            virtual void render(sf::RenderWindow* window) = 0;
    };
}

#endif