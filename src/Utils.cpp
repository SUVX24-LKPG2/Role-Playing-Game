#include "Utils.h"
#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif


void Utils::clearScreen() {
    #ifdef _WIN32
    system("cls");
    #else
    std::cout << "\033[2J\033[H" << std::flush;
    #endif
}

void Utils::pauseForSeconds(int seconds) {
    #ifdef _WIN32
    Sleep(seconds * 1000); // Sleep takes milliseconds
    #else
    sleep(seconds); // sleep takes seconds
    #endif
}