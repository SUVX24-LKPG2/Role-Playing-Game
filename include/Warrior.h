#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Player.h"

class Warrior : public Player {
public:
    Warrior(const std::string& name) : Player(name, "Warrior", 10, 30) {} // Warrior has a min damage of 10 and max damage of 30
    ~Warrior() {}
};

#endif // WARRIOR_H