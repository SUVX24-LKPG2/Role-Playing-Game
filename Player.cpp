#include <iostream>
#include <string>
#include "Player.h"

Player::Player(){}
/*Player::Player(std::string name, int health)
{
    this->name = name;
    this->health = health;
}*/
std::string Player::getName()
{
    return name;
}
void Player::setName(std::string name)
{
    this->name = name;
}
int Player::getHealth()
{
    return health;
}
void Player::setHealth(int health)
{
    this->health = health;
}
void Player::setPlayerClass(std::string playerClass)
{
    this->playerClass = playerClass;
}
std::string Player::getPlayerClass()
{
    return playerClass;
}
std::string Player::playerDead()
{
    if(health <= 0)
    {
        return "You have died! Game Over!";
    }
   
}