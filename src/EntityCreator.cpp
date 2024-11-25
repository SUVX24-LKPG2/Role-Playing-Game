#include "EntityCreator.h"
#include "Enemy.h"
//#include "Goblin.h"
//#include "Skeleton.h"
#include "Troll.h"
#include <random>
#include <memory>

// Create a random enemy

std::shared_ptr<Enemy> EntityCreator::createRandomEnemy() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);

    int choice = dis(gen);

    enum EnemyType { GOBLIN = 1, SKELETON = 2, TROLL = 3 };
    switch (choice)
    {
    case GOBLIN:
        //return std::make_shared<Goblin>();
        return nullptr;

    case SKELETON:
        //return std::make_shared<Skeleton>();
        return nullptr;

    case TROLL:
        return std::make_shared<Troll>();

    default:
        return nullptr;
    }
}