#include "Weapon.h"

int Weapon::getDamage() const {
    return 1 + rand() % m_damage; // random damage between 1 and damage
}