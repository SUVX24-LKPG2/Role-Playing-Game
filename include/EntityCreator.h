#ifndef ENTITYCREATOR_H
#define ENTITYCREATOR_H

#include "Enemy.h"
#include <memory>

class EntityCreator
{
public:
    static std::shared_ptr<Enemy> createRandomEnemy();
};

#endif // ENTITYCREATOR_H