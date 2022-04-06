//
// Created by Jose Revilla on 3/15/22.
//

#include "PoolBall.h"
void PoolBall::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    states.transform = ball.getTransform();
    window.draw(ball);
    window.draw(number, states);
}

PoolBall::PoolBall() : PoolBall(8)
{

}

PoolBall::PoolBall(int number)
        : number(number)
{
    ball.setFillColor(sf::Color::Black);
    center();
}

void PoolBall::center()
{
    sf::FloatRect bb = ball.getGlobalBounds();
    sf::FloatRect nb = number.getGlobalBounds();


//    HelperFunctions::print(bb);
//    HelperFunctions::print(nb);

    number.setPosition(ball.getGlobalBounds());
}
void PoolBall::setRadius(float radius)
{
    ball.setRadius(radius);
    number.setRadius(radius * .5);
    center();
}

void PoolBall::setFillColor(sf::Color color)
{
    ball.setFillColor(color);
}

void PoolBall::bounce()
{
    ball.bounce();
}

void PoolBall::setVelocity(float x, float y)
{
    ball.setVelocity(x, y);
}
