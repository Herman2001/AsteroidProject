//
// Created by Robin Franzen on 2024-12-12.
//

#include "Bullet.h"

Bullet::Bullet() : speed(300.f) {
    shape.setSize(sf::Vector2f(10.f, 5.f));
    shape.setFillColor(sf::Color::Yellow);
}

void Bullet::update() {
    shape.move(velocity * 0.016f);
}

