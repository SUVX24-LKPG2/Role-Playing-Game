#include "Game.h"
#include "Utils.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <locale>
#include <unistd.h>
#include <vector>
#ifdef _WIN32
#include <conio.h>
#endif

Game::Game() {
    // Initialize the grid
    loadGrid();
    // Player's starting position
    player.setPositionX(1);
    player.setPositionY(1);
    currentState = GameState::Exploring;
}

void Game::loadGrid() {
    std::ifstream file("grid.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        grid.push_back(line);
    }
}

void Game::displayGrid() {
    system("clear || cls"); // Optimize this later
    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            if (x == player.getPositionX() && y == player.getPositionY())
                std::cout << "\u263A"; // Player
                //std::cout << "@"; // Player
            else
                std::cout << grid[y][x]; // Tile
        }
        std::cout << "\n";
    }
}

bool Game::moveGrid(int dx, int dy) {
    int newX = player.getPositionX() + dx;
    int newY = player.getPositionY() + dy;

    // Check for collisions
    if (grid[newY][newX] == '#') return false;
    if (grid[newY][newX] == 'M') {
        currentState = GameState::Combat;
    }
    player.setPositionX(newX);
    player.setPositionY(newY);

    return true;
}

void Game::displayCombat() {
    std::cout << "\033[2J\033[H"; // Clear the screen
    std::cout << "=== COMBAT MODE ===\n";
    std::cout << "Monster HP: 10\n";
    std::cout << "Your HP: 10\n\n";

    //load monster ascii from file?

    // temp shit
    grid[player.getPositionY()][player.getPositionX()] = '.'; // Remove the monster (temporary, should be done in combat logic)
    std::cout << "Press any key to continue...\n";
    getchar();
    currentState = GameState::Exploring;
}

void handleCombat() {
    // Combat logic
}

void Game::gameLoop() {
    std::srand(std::time(nullptr));
    setRawMode();
    displayGrid();

    while (true) {
        if (currentState == GameState::Combat) {
            displayCombat();
        } else {
            char input;
            #ifdef _WIN32
            input = _getch();
            #else
            input = getchar(); // Use getchar() on Linux/Mac
            #endif

            switch (input) {
                case 'w': moveGrid(0, -1); break; // Up
                case 's': moveGrid(0, 1); break;  // Down
                case 'a': moveGrid(-1, 0); break; // Left
                case 'd': moveGrid(1, 0); break;  // Right
                case 'q': return; // Quit
            }
        }
        displayGrid();
    }
}