#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Player.h"

const int GRID_WIDTH = 20; // 20 columns (I guess we could use grid[0].size() instead)
const int GRID_HEIGHT = 10; // 10 rows

enum class GameState { Exploring, Combat };

class Game {
private:
    std::vector<std::string> grid;
    //int playerX, playerY;
    GameState currentState;
    Player player;

public:
    Game();

    void loadGrid();
    void displayGrid();
    bool moveGrid(int dx, int dy);
    void displayCombat();
    void handleCombat();
    void gameLoop();
};

#endif // GAME_H