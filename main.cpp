#include <iostream>
#include <string>
#include "Combatlogic.h"
#include "Player.h"
#include "Enemy.h"


int main()
{   Combatlogic fight;
    Player player1;
    player1.setName("y521t");
    Enemy monster("Goblin", 50);
    cout << player1.getName() << "'s Health: " << player1.getHealth() << endl;
    cout << monster.getName() << "'s Health: " << monster.getHealth() << endl;
    fight.playerAttack(player1, monster);
    cout << monster.getName() << "'s Health after attack: " << monster.getHealth() << endl;
    
    return 0;
}