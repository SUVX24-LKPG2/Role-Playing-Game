#include "Utils.h"
#include "Enemy.h"
#include <iostream>
#include <unistd.h>
#ifdef _WIN32
#include <windows.h>
#endif


void Utils::clearScreen() {
    #ifdef _WIN32
    system("cls");
    #else
    std::cout << "\033[2J\033[H" << std::flush;
    #endif
}