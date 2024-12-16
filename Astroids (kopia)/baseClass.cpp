//
// Created by Herman Bengtsson on 2024-12-12.
//

#include "baseClass.h"
#include <iostream>
baseClass::baseClass() {
    velocity = sf::Vector2f(0.f, 0.f);
}

void baseClass::setPosition(const sf::Vector2f& position) {
    shape.setPosition(position);
}

sf::Vector2f baseClass::getPosition() const {
    return shape.getPosition();
}

sf::FloatRect baseClass::getGlobalBounds() const {
    return shape.getGlobalBounds();
}

void baseClass::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    std::cout << "Drawing asteroid at: " << shape.getPosition().x
          << ", " << shape.getPosition().y << std::endl;
    target.draw(shape, states);
}

void baseClass::setVelocity(const sf::Vector2f& vel) {
    velocity = vel;
}