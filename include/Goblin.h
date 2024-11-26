#ifndef GOBLIN_H
#define GOBLIN_H
#include <vector>
#include "Enemy.h"
#include <string>

class Goblin : public Enemy {
private:
std::string name;
int Health;
std::vector<std::string> asciiArt;

public:
    Goblin();
    ~Goblin() {}
    void enemyUI() const override;
};

#endif