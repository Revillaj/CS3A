//
// Created by Jose Revilla on 3/15/22.
//

#ifndef BOUNCING_BALL_BALL_H
#define BOUNCING_BALL_BALL_H
#include <SFML/Graphics.hpp>

class Ball : public sf::CircleShape //we do this to inherit circle shape of circle
{
private:
    int xVelocity, yVelocity;
    sf::Vector2u windowSize;
public:
    void setVelocity(float x, float y);
    void setXVelocity(int xVelocity);
    void setYVelocity(int yVelocity);
    void setWindowSize(const sf::Vector2u &windowSize);

    int getYVelocity() const;
    int getXVelocity() const;

    const sf::Vector2u &getWindowSize() const;


public:
    Ball();
    Ball(sf::Vector2u windowSize);
    void bounce();
};

#endif //BOUNCING_BALL_BALL_H
