//
// Created by Jose Revilla on 3/15/22.
//

#ifndef BOUNCING_BALL_POOLBALL_H
#define BOUNCING_BALL_POOLBALL_H
#include "PoolBallNumber.h"
#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "HelperFunctions.h"

class PoolBall : public sf::Drawable
{
private:
    Ball ball;
    PoolBallNumber number;
public:
    PoolBall();
    PoolBall(int number);
    void center();
    virtual void draw(sf::RenderTarget& window,
                      sf::RenderStates states) const;
    void setRadius(float radius);
    void setFillColor(sf::Color color);
    void bounce();
    void setVelocity(float x, float y);

};

#endif //BOUNCING_BALL_POOLBALL_H
