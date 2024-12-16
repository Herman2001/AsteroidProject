//
// Created by Robin Franzen on 2024-12-12.
//

#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Asteroid.h"
#include "Bullet.h"
#include "CollisionManager.h"
#include "baseClass.h"

class Game {
public:
    Game();
    void run();
    void handleInput();
    void update();
    void render();
    void checkCollision();

private:

    sf::RenderWindow window;
    Player player;
    std::vector<Asteroid> asteroids;
    std::vector<Bullet> bullets;
    CollisionManager collisionManager;
};
#endif //GAME_H
