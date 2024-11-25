#include "Combatlogic.h"
#include "Player.h"
#include "Enemy.h"
using namespace std;
const int ATTACK_POWER = 10;

void Combatlogic::playerAttack(Player& player, Enemy& enemy) {
    cout << player.getName() << " attacked " << enemy.getName() 
         << ", dealt " << ATTACK_POWER << " damage!" << endl;

    enemy.setHealth(enemy.getHealth() - ATTACK_POWER);
}
void Combatlogic::monsterAttack(Player& player, Enemy& enemy){
    enemy.setEnemyDamage(10);
    cout << enemy.getName() << " attacked" << player.getName() << "，dealt " << enemy.getEnemyDamage()<< " damage！" << endl;
    player.setHealth(player.getHealth() -= enemy.getEnemyDamage());
}
void battleLoop(Player& player, Enemy& enemy) {
    while (true) {
        cout << "\n--- Battle Options ---\n";
        cout << "1. Attack\n";
        cout << "2. Run\n";
        cout << "Choose an action (1/2): ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            void playerAttack(Player& player, Enemy& enemy);
            
            if (enemy.getHealth() <= 0) {
                cout << enemy.getName() << " has been defeated! You win!\n";
                break;
        }
        void monsterAttack(Player& player, Enemy& enemy);
        if (player.getHealth() <= 0) {
            cout << player.getName() << " has been defeated. Game over!\n";
            break;
        }
    }else if (choice == 2) {
            // Player chooses to run
            cout << player.getName() << " chose to run away!\n";
            break;
    }else {
            cout << "Invalid choice. Please enter 1 or 2.\n";
    }
    cout << "\n" << player.getName() << "'s Health: " << player.getHealth() << "\n";
    cout << enemy.getName() << "'s Health: " << enemy.getHealth() << "\n";
}
}