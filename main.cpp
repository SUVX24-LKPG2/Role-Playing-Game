#include <iostream>
#include <string>
#include <string_view>
#include "Enemy.h"
#include "Warrior.h"
using namespace std;

int main()
{
    Enemy enemy ("Diablo", 100);
    cout << "Enemy name: " << enemy.getName() << endl;
    cout << "Enemy health: " << enemy.getHealth() << endl;
    //Test av klassen Warrior
    Warrior player1("Player1");
    cout <<"Enter the name you want to name your Player of Warrior type: ";
    string name;
    getline(cin, name);
    player1.setName(name);
    cout << "Player name: " << player1.getName() << endl;
    cout << "Player health: " << player1.getHealth() << endl;
    cout << "Player class: " << player1.getPlayerClass() << endl;
    player1.setHealth(20);
    cout << "Player health: " <<player1.getHealth() <<endl;
    cout << player1.playerDead() << endl;
    player1.setHealth(0);
    cout << "Player health: " <<player1.getHealth() <<endl;
    cout << player1.playerDead() << endl;
    return 0;
}