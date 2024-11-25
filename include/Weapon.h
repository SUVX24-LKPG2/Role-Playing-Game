#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon    
{
private:
    std::string m_name;
    int m_damage; //max extra damage

public:
    Weapon() : m_name("Sword"), m_damage(1) {}
    Weapon(const std::string& name, int damage) : m_name(name), m_damage(damage) {}
    ~Weapon();

    int getDamage() const;
};

#endif // WEAPON_H