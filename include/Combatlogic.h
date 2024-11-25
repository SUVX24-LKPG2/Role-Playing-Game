#ifndef COMBATLOGIC_H
#define COMBATLOGIC_H
#include "Player.h"
#include "Enemy.h"
using namespace std;

class Combatlogic{
    public:
        void playerAttack(Player& player, Enemy& enemy);
        void monsterAttack(Player& player, Enemy& enemy);
        void battleLoop(Player& player, Enemy& enemy);
};
#endif