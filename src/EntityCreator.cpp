#include "EntityCreator.h"
#include "Enemy.h"
#include "Goblin.h"
#include "Orc.h"
#include "Troll.h"
#include <random>

// Create a random enemy

std::shared_ptr<Enemy> EntityCreator::createRandomEnemy() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);

    int choice = dis(gen);

    enum EnemyType { GOBLIN = 1, ORC = 2, TROLL = 3 };
    switch (choice)
    {
    case GOBLIN:
        return std::make_shared<Goblin>();

    case ORC:
        return std::make_shared<Orc>();

    case TROLL:
        return std::make_shared<Troll>();

    default:
        return nullptr;
    }
}