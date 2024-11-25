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
    Troll(const std::string& name, int Health);

    void enemyUI() const;
};

#endif
