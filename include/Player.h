#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    std::string playerClass;
    int minDamage;
    int maxDamage;
    int healthPotions;
    int manaPotions;

public:
    Player(const std::string& name, const std::string& playerClass, int minDamage, int maxDamage)
        : name(name), health(100), playerClass(playerClass), minDamage(minDamage), maxDamage(maxDamage) {}
    std::string getName() const;
    ~Player() {}
    void setName(std::string name);
    int getHealth() const;
    void setHealth(int health);
    void setPlayerClass(std::string playerClass);
    std::string getPlayerClass() const;
    void takeDamage(int damage);
    int getHealthPotions() const;
    void setHealthPotions(int healthPotions);
    void useHealthPotion();
    int attack() const;

};

#endif