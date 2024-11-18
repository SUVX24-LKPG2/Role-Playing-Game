#include <ctime>
#include <fstream>
#include <iostream>
#include <locale>
#ifdef _WIN32
#include <conio.h> // _getch() on Windows
#else
#include <termios.h> // Use _getch() on Windows and conio.h
#endif
#include <unistd.h>
#include <vector>

const int GRID_WIDTH = 20;
const int GRID_HEIGHT = 10;

enum class GameState { Exploring, Combat };

class Game {
private:
    std::vector<std::string> grid;
    int playerX, playerY;
    GameState currentState;

public:
    Game() {
        // Initialize the grid
        loadGrid();
        // Player's starting position
        playerX = 1;
        playerY = 1;
        currentState = GameState::Exploring;
    }

    void loadGrid() {
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

#ifndef _WIN32
    void setRawMode() {
        termios term;
        tcgetattr(STDIN_FILENO, &term);
        term.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &term);
    }

    void resetRawMode() {
        termios term;
        tcgetattr(STDIN_FILENO, &term);
        term.c_lflag |= (ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &term);
    }
#endif

    void displayGrid() {
        //system("clear"); // cls on Windows
        std::cout << "\033[2J\033[H"; // Clear the screen
        for (int y = 0; y < GRID_HEIGHT; y++) {
            for (int x = 0; x < GRID_WIDTH; x++) {
                if (x == playerX && y == playerY)
                    std::cout << "\u263A"; // Player
                    //std::cout << "@"; // Player
                else
                    std::cout << grid[y][x]; // Tile
            }
            std::cout << "\n";
        }
    }

    bool moveGrid(int dx, int dy) {
        int newX = playerX + dx;
        int newY = playerY + dy;

        // Check for collisions
        if (grid[newY][newX] == '#') return false;
        if (grid[newY][newX] == 'M') {
            currentState = GameState::Combat;
        }
        playerX = newX;
        playerY = newY;

        return true;
    }

    void displayCombat() {
        std::cout << "\033[2J\033[H"; // Clear the screen
        std::cout << "=== COMBAT MODE ===\n";
        std::cout << "Monster HP: 10\n";
        std::cout << "Your HP: 10\n\n";

        grid[playerY][playerX] = '.'; // Remove the monster (temporary, should be done in combat logic)
        std::cout << "Press any key to continue...\n";
        getchar();
        currentState = GameState::Exploring;
    }

    void handleCombat() {
        // Combat logic
    }

    void gameLoop() {
        std::srand(std::time(nullptr));
        setRawMode();
        displayGrid();

        while (true) {
            if (currentState == GameState::Combat) {
                displayCombat();
            } else {
                char input = getchar(); // Windows, use getchar() on Linux/Mac
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
};

int main() {
    std::locale::global(std::locale("en_US.UTF-8"));
    std::wcout.imbue(std::locale());

    Game game;
    game.gameLoop();
    return 0;
}