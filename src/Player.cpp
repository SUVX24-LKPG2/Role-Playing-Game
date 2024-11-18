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
    if(health < 0)
    {
        std::cout <<"Health cannot be negative" << std::endl;
    }
    else{
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

std::string Player::playerDead()
{
    if(health <= 0)
    {
        return "You have died! Game Over!";
    }
    else 
    {
        return "You are still alive!";
    }
   
}