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

std::string Player::getPlayerClass() const
{
    return playerClass;
}


void Player::takeDamage(int damage)
{
    health -= damage;  
}