#include "Combat.h"
#include "Utils.h"
#include "Player.h"
#include "Enemy.h"

#include <iostream>


void Combat::start(Player& player, Enemy& enemy, bool& lastRoom) {
    while (player.getHealth() > 0 && enemy.getHealth() >0 ) {
        Utils::clearScreen();
        enemy.enemyUI();
        std::cout << enemy.getName() <<" Health: " << enemy.getHealth() << std::endl;
        std::cout << player.getName() <<" Health: " << player.getHealth() << std::endl;
        std::cout <<"Battle Options: " << std::endl;
        std::cout << "1. Attack" << std::endl;
        std::cout << "2. Take health potion" << std::endl;
        std::cout << "3. Run" << std::endl;
        int choice;
        std::cin >> choice;
        if(choice == 1) {
            int damage = player.attack();
            enemy.takeDamage(damage);
            std::cout << "You attack the enemy for " <<damage << " damage" << std::endl;
    
           

        } else if (choice == 2) {
            if (player.getHealthPotions() == 0) {
                std::cout << "You have no health potions left!" << std::endl;
    
                continue;
            }
            player.useHealthPotion();
        } else if (choice == 3 ) {
            if (lastRoom) {
                std::cout << "You can't run away from the final room!" << std::endl;
                Utils::pauseForSeconds(2);
                continue;
            }
            else
            {
                std::cout << "You run away like a coward!" << std::endl;
                Combat::enemyAttack(player, enemy);
                break;
            }
        }

       Combat::enemyAttack(player, enemy);
    }

    if (player.getHealth() <= 0) {
        std::cout <<"You were useless in battle and died!" << std::endl;
    } else if (enemy.getHealth() <= 0) {
        std::cout <<"You were a hero and killed the puny enemy!!" << std::endl;
    }
};
void Combat::enemyAttack(Player& player, Enemy& enemy)
{
  if(enemy.getHealth() > 0) {
            int damage = enemy.attack();
            player.takeDamage(damage);
            std::cout << "The enemy attacks you for " << damage<< " damage" << std::endl;
            Utils::pauseForSeconds(2);
        }
}