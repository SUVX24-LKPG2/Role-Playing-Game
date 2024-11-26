#include "Combat.h"
#include "Utils.h"
#include "Player.h"
#include "Enemy.h"

#include <iostream>

void Combat::start(Player& player, Enemy& enemy) {
    while (player.getHealth() > 0 || enemy.getHealth() >0 ) {
        // combat loop
    }

    if (player.getHealth() <= 0) {
        // Game over
    } else if (enemy.getHealth() <= 0) {
        // Player won
    }
};