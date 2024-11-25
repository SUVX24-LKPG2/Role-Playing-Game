#ifndef ENTITYCREATOR_H
#define ENTITYCREATOR_H

#include "Enemy.h"

class EntityCreator
{
public:
    static std::shared_ptr<Enemy> createRandomEnemy();
};

#endif // ENTITYCREATOR_H