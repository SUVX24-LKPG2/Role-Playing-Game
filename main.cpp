#include <iostream>
#include <string>
#include <string_view>
#include "Enemy.h"
using namespace std;

int main()
{
    Enemy enemy ("Diablo", 100);
    cout << "Enemy name: " << enemy.getName() << endl;
    cout << "Enemy health: " << enemy.getHealth() << endl;
    return 0;
}