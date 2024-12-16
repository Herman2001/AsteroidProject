//
// Created by Robin Franzen on 2024-12-12.
//

#ifndef ASTEROID_H
#define ASTEROID_H
#include "baseClass.h"

class Asteroid : public baseClass {
    public:
    Asteroid(const sf::Vector2f& startPosition);
    void update() override;
private:
    //sf::CircleShape shape;
    float speed;
};
#endif //ASTEROID_H
