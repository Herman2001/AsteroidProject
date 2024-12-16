//
// Created by Robin Franzen on 2024-12-12.
//
#include "CollisionManager.h"

#include <iostream>

void CollisionManager::checkPlayerAsteroidCollision(Player &player, std::vector<Asteroid> &asteroids) {
    const sf::FloatRect playerBounds = player.getGlobalBounds();

    for(auto& asteroid : asteroids) {
        if(playerBounds.intersects(asteroid.getGlobalBounds())){
            //Ska inte vara här sen, bara tillfälligt. Borde lägga till -Health eller att man dör typ xD
            std::cout << "Player collided with asteroid" << std::endl;
        }
    }
}

void CollisionManager::checkBulletAsteroidCollision(std::vector<Bullet> &bullets, std::vector<Asteroid> &asteroids) {
    for (auto& bullet : bullets) {
        sf::FloatRect bulletBounds = bullet.getGlobalBounds();
        for (auto& asteroid : asteroids) {
            if(bulletBounds.intersects(asteroid.getGlobalBounds())){
                //Samma sak här, ska inte vara cout utan ska läggas till funktion.
                std::cout << "Bullet collided with asteroid" << std::endl;

                bullet.setPosition(sf::Vector2f(-100.f, -100.f));  //Nu flyttas bara bullet och asteroid utanför skärmen,
                asteroid.setPosition(sf::Vector2f(-100.f, -100.f)); // kanske bättre att radera dem?
            }
        }
    }
}


