#include "Skeleton.h"
#include <iostream>

Skeleton::Skeleton() : Enemy("Skeleton", 10, 15) { 
    asciiArt = {
        "      .-.",
        "     (o.o)",
        "      |=|",
        "     __|__",
        "   //.=|=.\\\\",
        "  // .=|=. \\\\",
        "  \\\\ .=|=. //",
        "   \\\\(_=_)//",
        "    (:| |:)",
        "     || ||",
        "     () ()",
        "     || ||",
        "     || ||",
        "l42 ==' '=="
    };
    }
    void Skeleton::enemyUI() const {
    for (const auto& line : asciiArt) {
        std::cout << line << std::endl;
    }
    }
