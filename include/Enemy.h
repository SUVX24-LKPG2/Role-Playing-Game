#ifndef ENEMY_H
#define ENEMY_H
#include <string>

using namespace std;

class Enemy{
private:
    string Name;
    int Health;
    int Damage;

public:
    Enemy(const string Name, int Health);
    string getName() const;
    int getHealth();
    void setName(string Name);
    void setHealth(int Health);
    int getEnemyDamage();
    void setEnemyDamage(int Damage);
};
#endif