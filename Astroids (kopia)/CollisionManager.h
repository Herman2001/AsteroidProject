//
// Created by Robin Franzen on 2024-12-12.
//

#ifndef COLLISIONMANAGER_H
#define COLLISIONMANAGER_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Bullet.h"
#include "Asteroid.h"

class CollisionManager {
    public:
    CollisionManager() = default;

    static void checkPlayerAsteroidCollision(Player& player, std::vector<Asteroid>& asteroids);

    static void checkBulletAsteroidCollision(std::vector<Bullet>& bullets, std::vector<Asteroid>& asteroids);
};
#endif //COLLISIONMANAGER_H
