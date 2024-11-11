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
    Warrior player1("Klas", 100, "Warrior");
    Warrior player2;
    std:: string name1 = "Knight";
    std:: string playerClass = "Warrior";
    int health = 45; 
    Warrior player3(name1, health, playerClass);
    cout << "Player name: " << player3.getName() << endl;
    cout << "Player health: " << player3.getHealth() << endl;
    cout << "Player class: " << player3.getPlayerClass() << endl;
    cout <<"Enter the name you want to name your Player of Warrior type: ";
    string name;
    getline(cin, name);
    player2.setName(name);
    cout << "Player name: " << player2.getName() << endl;
    cout << "Player health: " << player2.getHealth() << endl;
    cout << "Player class: " << player2.getPlayerClass() << endl;
    cout << "Player name: " << player1.getName() << endl;
    cout << "Player health: " << player1.getHealth() << endl;
    cout << "Player class: " << player1.getPlayerClass() << endl;
    player1.setHealth(-10);
    cout << "Player health: " <<player1.getHealth() <<endl;
    cout << player1.playerDead() << endl;
    player1.setHealth(0);
    cout << "Player health: " <<player1.getHealth() <<endl;
    cout << player1.playerDead() << endl;
    return 0;
}