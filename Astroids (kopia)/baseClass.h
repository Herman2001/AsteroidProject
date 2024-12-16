//
// Created by Herman Bengtsson on 2024-12-12.
//

#ifndef BASECLASS_H
#define BASECLASS_H
#include <SFML/Graphics.hpp>

class baseClass : public sf:: Drawable{public:
        baseClass();
        //virtual ~baseClass() {}

        virtual void update() = 0;
        void setPosition(const sf::Vector2f& position);
        sf::Vector2f getPosition() const;
        void setVelocity(const sf::Vector2f& vel);
        sf::FloatRect getGlobalBounds() const;
    protected:
        sf::Vector2f velocity;
        sf::RectangleShape shape;

    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    };



#endif //BASECLASS_H
