#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include <string>
#include "Player.h"

class Mage : public Player {
public:
    Mage(const std::string& name) : Player(name, "Mage", 10, 20) {}
    ~Mage() {}
};

#endif // MAGE_H