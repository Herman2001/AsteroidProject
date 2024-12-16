//
// Created by Robin Franzen on 2024-12-12.
//

#include "Game.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game() : window(sf::VideoMode(1920, 1080), "Asteroids Game") {
    player.setPosition(sf::Vector2f(400, 300));
    srand(static_cast<unsigned>(time(nullptr)));
    //asteroids.emplace_back();

    for (int i = 0; i < 5; ++i) { // Skapa 5 asteroider
        sf::Vector2f position(rand() % 1920, rand() % 1080); // Slumpmässig position
        asteroids.emplace_back(position);
        std::cout << "Asteroid skapades" << std::endl; //Endast för debug
    }
}

void Game::run() {
    while(window.isOpen()) {
        handleInput();
        update();
        checkCollision();
        render();
    }
}

void Game::handleInput() {
    sf::Event event{};
    while(window.pollEvent(event)) {
        if(event.type == sf::Event::Closed) {
            window.close();
        }

        player.handleInput();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            player.shoot(bullets);
        }
    }
}

void Game::update() {
    player.update();
    for(auto& bullet : bullets) {
        bullet.update();
    }
    for(auto& asteroid : asteroids) {
        asteroid.update();
    }
}

void Game::render() {
    window.clear();

    window.draw(player);
    for (auto& bullet : bullets) {
        window.draw(bullet);
    }
    for (auto& asteroid : asteroids) {
        //För debug
        // std::cout << "Drawing asteroid at: " << asteroid.getPosition().x
        // << ", " << asteroid.getPosition().y << std::endl;
        window.draw(asteroid);
    }
    window.display();
}

void Game::checkCollision() {
    CollisionManager::checkPlayerAsteroidCollision(player, asteroids);  //Dessa är inte helt klara än.
    CollisionManager::checkBulletAsteroidCollision(bullets, asteroids);
}

int main() {
    Game game;
    game.run();
    return 0;
}