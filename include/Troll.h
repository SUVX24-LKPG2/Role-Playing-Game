#ifndef TROLL_H
#define TROLL_H
#include <vector>
#include "Enemy.h"
#include <string>

class Troll : public Enemy {
private:
std::string name;
std::vector<std::string> asciiArt;

public:
    Troll();
    ~Troll() {}
    void enemyUI() const override;
};

#endif
