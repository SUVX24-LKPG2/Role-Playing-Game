#ifndef SKELETON_H
#define SKELETON_H
#include <vector>
#include "Enemy.h"
#include <string>

class Skeleton : public Enemy {
private:
std::string name;
std::vector<std::string> asciiArt;

public:
    Skeleton();
    ~Skeleton() {}
    void enemyUI() const override;
};

#endif