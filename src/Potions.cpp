#include <string>
#include <string_view>
#include "Potions.h"

Potions::Potions(std::string_view name, std::string_view description) : Item(name, description) {}

int Potions::getHealth() const {
    return this->health;
}

void Potions::setHealth(int health) {
    if (this->health - health < 0) {
        health = 0;
    } else {
        this->health = health;
    }
}