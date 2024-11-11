#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    std:: string playerClass;
    public:
    Player();
    Player(std::string name, int health);
    std::string getName();
    void setName(std::string name);
    int getHealth();
    void setHealth(int health);
     void setPlayerClass(std::string playerClass);
    std::string getPlayerClass();
    std::string playerDead();
};

#endif