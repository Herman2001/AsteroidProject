//
// Created by Robin Franzen on 2024-12-12.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "baseClass.h"
#include "Bullet.h"
#include <vector>

class Player : public baseClass {
    public:
    Player();
    void handleInput();
    void update() override;
    void shoot(std::vector<Bullet>& bullets) const;

private:
    float speed;
};


#endif //PLAYER_H
