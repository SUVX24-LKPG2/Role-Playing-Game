#include <iostream>
#include <string>
#include "Player.h"

std::string Player::getName() const
{
    return name;
}

void Player::setName(std::string name)
{
    this->name = name;
}

int Player::getHealth() const
{
    return health;
}

void Player::setHealth(int health)
{
    if (this->health - health < 0) {
        health = 0;
    } else {
        this->health = health;
    }
}

void Player::setPlayerClass(std::string playerClass)
{
    this->playerClass = playerClass;
}

std::string Player::getPlayerClass() const
{
    return playerClass;
}


void Player::takeDamage(int damage)
{
    health -= damage;  
}