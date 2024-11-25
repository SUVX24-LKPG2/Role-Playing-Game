#ifndef SKELETON_H
#define SKELETON_H
#include <vector>
#include "Enemy.h"
#include <string>

class Skeleton : public Enemy {
private:
std::string name;
int Health;
std::vector<std::string> asciiArt;

public:
    Skeleton();

    void enemyUI() const;
};

#endif