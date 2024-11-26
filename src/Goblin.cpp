#include "Goblin.h"
#include <iostream>

Goblin::Goblin() : Enemy("Goblin", 5, 10) { 
    asciiArt = {
    "   _____",
    "  .-,;='';_),-.",
    "  \\_\\(),()/_/",
    "    (,___,)",
    "   ,-/`~`\\-,___",
    "  / /).:.('--._)",
    " {_[ (_,_)",
    "      | Y |",
    "     /  |  \\"
    };
    }
    void Goblin::enemyUI() const {
    for (const auto& line : asciiArt) {
        std::cout << line << std::endl;
    }
    std::cout << "\nName: " << this->name << " Health: " << this->Health << std::endl;
    }