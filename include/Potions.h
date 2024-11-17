#ifndef POTIONS_H
#define POTIONS_H

#include <string>
#include <string_view>
#include "Item.h"

class Potions : public Item
{
private:
    int health;
    int mana;

public:
    Potions(std::string_view name, std::string_view description);
    ~Potions();

    int getHealth() const;
    void setHealth(int health);
};

#endif // POTIONS_H