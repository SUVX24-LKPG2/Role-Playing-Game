#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{
private:
    std::string m_name;
    int m_health;
    std::string m_playerClass;
    int m_positionX;
    int m_positionY;

public:
    Player() : m_health(100) {}
    Player(std::string name, int health = 100) : m_name(name), m_health(health) {}
    Player(std::string name, int health = 100, std::string playerClass = "") 
        : m_name(name), m_health(health), m_playerClass(playerClass) {}
    
    std::string getName();
    void setName(std::string name);
    int getHealth() const;
    void setHealth(int health);
    void setPlayerClass(std::string playerClass);
    std::string getPlayerClass() const;
    std::string playerDead() const;
    int getPositionX() const;
    void setPositionX(int positionX);
    int getPositionY() const;
    void setPositionY(int positionY);
};

#endif