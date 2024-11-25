#ifndef ROOM_H
#define ROOM_H

#include "Enemy.h"
#include <vector>
#include <string>
#include <memory>

class Room {
private:
    std::string m_name;
    std::string m_description;

    std::vector<std::shared_ptr<Enemy>> m_enemies;

public:
    Room(const std::string& name, const std::string& description) : m_name(name), m_description(description) {}

    const std::string& getName() const;
    const std::string& getDescription() const;
    void addEnemy(std::shared_ptr<Enemy> enemy);
    const std::vector<std::shared_ptr<Enemy>>& getEnemies() const;
    void displayEnemies() const;
};

#endif