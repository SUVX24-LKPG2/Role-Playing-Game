#include <string>
#include <string_view>
#include "Potions.h"

Potions::Potions(std::string_view name, std::string_view description) : Item(name, description) {}
Potions::~Potions() {}

int Potions::getHealth() const {
    return health;
}

void Potions::setHealth(int health) {
    this->health = health;
}