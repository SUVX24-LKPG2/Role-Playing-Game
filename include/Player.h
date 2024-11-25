#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    std::string playerClass;

public:
    Player(int health = 100) : health(health) {}
    Player(std::string name, int health = 100) : name(name), health(health) {}
    Player(std::string name, int health = 100, std::string playerClass = "")
        : name(name), health(health), playerClass(playerClass) {}
    std::string getName() const;
    void setName(std::string name);
    int getHealth() const;
    void setHealth(int health);
    void setPlayerClass(std::string playerClass);
    std::string getPlayerClass() const;
    std::string playerDead();
    void addDamage(int damage);
};

#endif