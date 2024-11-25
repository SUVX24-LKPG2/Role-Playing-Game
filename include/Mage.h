#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include <string>
#include "Player.h"

class Mage : public Player{
    public: 
    Mage();
    ~Mage();
    Mage(std::string name);
    Mage(std::string name, int health, std::string playerClass);
    

};
#endif