#include "Utils.h"
#include "Enemy.h"
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

void Utils::clearScreen() {
    #ifdef _WIN32
    system("cls");
    #else
    std::cout << "\033[2J\033[H" << std::flush;
    #endif
}


void Utils::pauseForSeconds(int seconds) {
    // sleep replaced with std::this_thread::sleep_for for cross-platform compatibility
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void Utils::printStringWithPause(const std::string& str)
{
    for (char c : str)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
}