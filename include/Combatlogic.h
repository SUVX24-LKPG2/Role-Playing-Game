#ifndef COMBATLOGIC_H
#define COMBATLOGIC_H
#include "Player.h"
#include "Enemy.h"
using namespace std;

class Combatlogic{
    public:
        void playerAttack(Player& player, Enemy& monster);
        void monsterAttack(Player& player, Enemy& monster);
};
#endif