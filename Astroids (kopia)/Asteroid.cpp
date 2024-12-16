//
// Created by Robin Franzen on 2024-12-12.
//

#include "Asteroid.h"
#include <iostream>

Asteroid::Asteroid(const sf::Vector2f& startPosition) : speed(100.f) {
    shape.setSize(sf::Vector2f(70, 70));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(startPosition);
    velocity = sf::Vector2f(0.f, 0.f);
    //För debug
    std::cout << "Asteroid initialized at: " << shape.getPosition().x
              << ", " << shape.getPosition().y << std::endl;
}

void Asteroid::update() {
    shape.move(velocity * 0.016f);
    std::cout << "Asteroid moved to: " << shape.getPosition().x
          << ", " << shape.getPosition().y << std::endl;
}