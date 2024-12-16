//
// Created by Robin Franzen on 2024-12-12.
//

#ifndef BULLET_H
#define BULLET_H
#include <SFML/Graphics.hpp>

#include "baseClass.h"

class Bullet : public baseClass {
    public:
    Bullet();
    void update() override;
private:
    float speed;
};

#endif //BULLET_H
