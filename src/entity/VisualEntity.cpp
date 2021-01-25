
#include <sebgine/entity/VisualEntity.hpp>

namespace seb
{
    void VisualEntity::tick()
    {
        update();
        render();
    }
}