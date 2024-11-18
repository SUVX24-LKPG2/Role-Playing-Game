#include <iostream>
#include <string>
#include "Player.h"

std::string Player::getName()
{
    return m_name;
}

void Player::setName(std::string name)
{
    this->m_name = name;
}

int Player::getHealth() const
{
    return m_health;
}

void Player::setHealth(int health)
{
    if(health < 0)
    {
        std::cout <<"Health cannot be negative" << std::endl;
    }
    else{
    this->m_health = health;
    }
}

void Player::setPlayerClass(std::string playerClass)
{
    this->m_playerClass = playerClass;
}

std::string Player::getPlayerClass() const
{
    return m_playerClass;
}

std::string Player::playerDead() const
{
    if(m_health <= 0)
    {
        return "You have died! Game Over!";
    }
    else 
    {
        return "You are still alive!";
    }
}

int Player::getPositionX() const
{
    return this->m_positionX;
}

void Player::setPositionX(int positionX)
{
    this->m_positionX = positionX;
}

int Player::getPositionY() const
{
    return this->m_positionY;
}

void Player::setPositionY(int positionY)
{
    this->m_positionY = positionY;
}