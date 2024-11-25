#ifndef GAME_H
#define GAME_H
#include <vector>

class Game {
private:
    std::vector<Player> players;
    std::vector<Enemy> enemies;
    std::vector<Potions> potions;
    std::vector<CombatUI> combat;

public:
    void run();
};

#endif