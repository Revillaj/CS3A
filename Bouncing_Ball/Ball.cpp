//
// Created by Jose Revilla on 3/15/22.
//

#include "Ball.h"
Ball::Ball() : Ball({1079, 719})
{

}

Ball::Ball(sf::Vector2u windowSize)
        : windowSize(windowSize), xVelocity(1), yVelocity(1)
{
    sf::CircleShape::setRadius(10);
}

void Ball::bounce()
{
    float x1 = sf::CircleShape::getPosition().x;
    float y1 = sf::CircleShape::getPosition().y;
    if (x1 < 0 || x1 >= windowSize.x - getRadius() * 2)
    {
        xVelocity = -xVelocity;
    }
    else if (y1 < 0 || y1 >= windowSize.y - getRadius() * 2)
    {
        yVelocity = -yVelocity;
    }
    sf::CircleShape::move(xVelocity, yVelocity);
}

int Ball::getXVelocity() const
{
    return xVelocity;
}

void Ball::setXVelocity(int xVelocity)
{
    Ball::xVelocity = xVelocity;
}

int Ball::getYVelocity() const
{
    return yVelocity;
}

void Ball::setYVelocity(int yVelocity)
{
    Ball::yVelocity = yVelocity;
}

const sf::Vector2u &Ball::getWindowSize() const
{
    return windowSize;
}

void Ball::setWindowSize(const sf::Vector2u &windowSize)
{
    Ball::windowSize = windowSize;
}

void Ball::setVelocity(float x, float y)
{
    xVelocity = x;
    yVelocity = y;
}
