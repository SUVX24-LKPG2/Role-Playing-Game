#ifndef TROLL_H
#define TROLL_H
#include <vector>
#include "Enemy.h"
#include <string>

class Troll : public Enemy {
private:
std::string name;
int Health;
std::vector<std::string> asciiArt;

public:
    Troll();

    void enemyUI() const override;
};

#endif
