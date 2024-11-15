#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"

Warrior::Warrior() : Player::Player()
{
    setHealth(100);
    std::string playerClass = "Warrior";
    setPlayerClass(playerClass);
}
Warrior::Warrior(std::string name) : Player::Player()
{
    setName(name);
    setHealth(100);
    std::string playerClass = "Warrior";
    setPlayerClass(playerClass);
}
Warrior::Warrior(std::string name, int health, std::string playerClass) : Player::Player(name, health, playerClass)
{
    setName(name);
    setHealth(health);
    setPlayerClass(playerClass);
}