#ifndef COMBAT_H
#define COMBAT_H

#include "Player.h"
#include "Enemy.h"

class Combat {
public:
    static void start(Player& player, Enemy& enemy);
};

#endif // COMBAT_H