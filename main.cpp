#include "Player.h"
#include "Utils.h"
#include "Game.h"
#include <locale>

int main() {
    std::locale::global(std::locale("en_US.UTF-8"));
    std::wcout.imbue(std::locale());

    Game game;
    game.gameLoop();
    return 0;
}