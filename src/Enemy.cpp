#include "Enemy.h"

using namespace std;

string Enemy::getName() const{
    return name;
};
int Enemy::getHealth(){
    return health;
};
void Enemy::setName(const string Name){
    this->name = Name;
};

void Enemy::takeDamage(int damage)
{
    health -= damage;  
}

int Enemy::attack() const
{
    return m_MinDamage + rand() % (m_MaxDamage - m_MinDamage + 1);
}
