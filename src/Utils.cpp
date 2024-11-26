#include "Utils.h"
#include "Enemy.h"
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>
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

void Utils::printStringWithPause(const std::string& str)
{
    for (char c : str)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
}