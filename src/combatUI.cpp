#include <iostream>
#include "Enemy.h"
#include "Player.h"

using namespace std;

void combatUI (const Enemy& enemy, const Player& player ) {
    cout << "=================================" << endl;
    cout << "\n\n\n";
    cout << "     _____               _____    \n";
    cout << "    |     |             |     |   \n";
    cout << "    |     |             | ^ ^ |   \n";
    cout << "    |_____|             |  _  |   \n";
    cout << "    /|\\                 |_____|   \n";
    cout << "   / | \\________       /  /  /     \n";
    cout << "     |      /    /     |  |  |    \n";
    cout << "     |     /____/      |  |  |    \n";
    cout << "    / \\                           \n";
    cout << "   /   \\                          \n";
    cout << "  /     \\                         \n";
    cout << enemy.getName()  << "  " << enemy.getHealth() << "\t\t" << player.getName() << "  " << player.getHealth() << endl;
    cout << "=================================" << endl;
}