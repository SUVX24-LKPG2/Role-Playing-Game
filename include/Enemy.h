#ifndef ENEMY_H
#define ENEMY_H
#include <string>

using namespace std;

class Enemy{
private:
    string Name;
    int Health;

public:
    Enemy(const string Name, int Health);
    string getName() const;
    int getHealth();
    void setName(string Name);
    void setHealth(int Health);
    void takeDamage(int damage);
};
#endif