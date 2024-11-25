#include <iostream>
#include <string>
#include "Player.h"
#include "Mage.h"

Mage::Mage() : Player::Player()
{
    setHealth(100);
    std::string playerClass = "Warrior";
    setPlayerClass(playerClass);
}
Mage::~Mage() {}

Mage::Mage(std::string name) : Player::Player()
{
    setName(name);
    setHealth(100);
    std::string playerClass = "Warrior";
    setPlayerClass(playerClass);
}
Mage::Mage(std::string name, int health, std::string playerClass) : Player::Player(name, health, playerClass)
{
    setName(name);
    setHealth(health);
    setPlayerClass(playerClass);
}