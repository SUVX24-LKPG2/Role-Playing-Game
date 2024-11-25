#include "Room.h"
#include "Enemy.h"
#include <iostream>

const std::string& Room::getName() const {
    return m_name;
}

const std::string& Room::getDescription() const {
    return m_description;
}

// Add an enemy to the room
void Room::addEnemy(std::shared_ptr<Enemy> enemy) {
    // transfer ownership of the enemy to the room
    m_enemies.push_back(std::move(enemy));
}

// Return a const reference to the vector of enemies
const std::vector<std::shared_ptr<Enemy>>& Room::getEnemies() const {
    return m_enemies;
}

// Display the enemies in the room
void Room::displayEnemies() const {
    for (const auto& enemy : m_enemies) {
        std::cout << "Enemy: " << enemy->getName() << ", Health: " << enemy->getHealth() << std::endl;
    }
}