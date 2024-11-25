#ifndef ENEMY_H
#define ENEMY_H
#include <string>

class Enemy{
private:
    std::string name;
    int health;
    int m_MinDamage;
    int m_MaxDamage;

public:
    Enemy(const std::string& name, int minDamage, int maxDamage)
        : name(name), health(100), m_MinDamage(minDamage), m_MaxDamage(maxDamage) {}
    std::string getName() const;
    int getHealth();
    void setName(std::string Name);
    void setHealth(int Health);
    void takeDamage(int damage);
    int attack() const;
};
#endif