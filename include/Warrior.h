#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Player.h"

class Warrior : public Player{
    public: 
    Warrior();
    Warrior(std::string name);
    Warrior(std::string name, int health, std::string playerClass);
    

};
#endif

