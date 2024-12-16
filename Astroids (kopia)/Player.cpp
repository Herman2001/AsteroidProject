//
// Created by Robin Franzen on 2024-12-12.
//

#include "Player.h"
#include "bullet.h"

Player::Player() : speed(20.f) {
    shape.setSize(sf::Vector2f(50.f, 50.f));
    shape.setFillColor(sf::Color::Green);
}

void Player::handleInput() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        velocity.x = -speed;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        velocity.x = speed;
    } else {
        velocity.x = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        velocity.y = -speed;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        velocity.y = speed;
    } else {
        velocity.y = 0;
    }

}

void Player::update() {
    shape.move(velocity * 0.016f);
}

void Player::shoot(std::vector<Bullet>& bullets) const {
    Bullet bullet;
    bullet.setPosition(shape.getPosition());
    bullets.push_back(bullet);
}





