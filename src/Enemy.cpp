#include "Enemy.h"

using namespace std;

Enemy::Enemy(const string Name, int Health){
    this->Name = Name;
    this->Health = 100 ;
}
string Enemy::getName() const{
    return Name;
}
int Enemy::getHealth(){
    return Health;
}
void Enemy::setName(const string Name){
    this->Name = Name;
}
void Enemy::setHealth(int Health){
    if (Health < 0) {
        throw invalid_argument("Health cannot be negative");
    }
    this->Health = Health;
}
    