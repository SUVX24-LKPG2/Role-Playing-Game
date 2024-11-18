#include <string>
#include <string_view>
#include "Item.h"
#include "Weapon.h"

Weapon::Weapon(std::string_view name, std::string_view description, int damage) : Item(name, description) {}
Weapon::~Weapon() {}

int Weapon::getDamage() const {
    return damage;
}

void Weapon::setDamage(int damage) {
    this->damage = damage;
}
