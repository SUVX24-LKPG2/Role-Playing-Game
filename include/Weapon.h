#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <string_view>
#include "Item.h"

class Weapon : public Item
{
private:
    int damage;

public:
    Weapon(std::string_view name, std::string_view description, int damage);
    ~Weapon();

    int getDamage() const;
    void setDamage(int damage);
};

#endif // WEAPON_H