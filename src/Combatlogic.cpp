#include "Combatlogic.h"
#include "Player.h"
#include "Enemy.h"
using namespace std;

void Combatlogic::playerAttack(const Player& player, Enemy& monster) {
    cout << Player::getName << " attacked " << monster.getName() 
         << ", dealt " << Player::getAttackPower() << " damage!" << endl;

    monster.setHealth(monster.getHealth() - Player::getAttackPower());
}