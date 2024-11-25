#include "Combatlogic.h"
#include "Player.h"
#include "Enemy.h"
using namespace std;
const int ATTACK_POWER = 10;

void Combatlogic::playerAttack(Player& player, Enemy& monster) {
    cout << player.getName() << " attacked " << monster.getName() 
         << ", dealt " << ATTACK_POWER << " damage!" << endl;

    monster.setHealth(monster.getHealth() - ATTACK_POWER);
}
void Combatlogic::monsterAttack(Player& player, Enemy& monster){
    monster.setEnemyDamage(10);
    cout << monster.getName() << " attacked" << player.getName() << "，dealt " << monster.getEnemyDamage()<< " damage！" << endl;
    player.setHealth(player.getHealth() -= monster.getEnemyDamage());
}