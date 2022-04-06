//
// Created by Jose Revilla on 3/15/22.
//

#include "PoolBallNumber.h"
sf::Font PoolBallNumber::font;

PoolBallNumber::PoolBallNumber() : PoolBallNumber(8)
{

}
PoolBallNumber::PoolBallNumber(int number)
{
    if(!font.loadFromFile("/Users/revilla/Library/Fonts/Starjedi.ttf"))
        exit(2);
    setRadius(30);
    setupText();
    setNumber(number);
    center();
}
void PoolBallNumber::draw(sf::RenderTarget &window, sf::RenderStates states) const
{

    window.draw(circle, states);
    window.draw(number, states);
}

void PoolBallNumber::setNumber(int number)
{
    this->number.setString(std::to_string(number));
    center();
}

void PoolBallNumber::setupText()
{
    number.setFont(font);
    number.setCharacterSize(48);
    number.setFillColor(sf::Color::Black);
}

void PoolBallNumber::center()
{
    float radius = circle.getRadius();
    sf::FloatRect bounds = circle.getGlobalBounds();
    float x = radius + bounds.left;
    float y = radius + bounds.top;
    sf::FloatRect nBounds = number.getGlobalBounds();
    number.setPosition(x -nBounds.width/2, y - nBounds.height);

}
void PoolBallNumber::setRadius(float radius)
{
    circle.setRadius(radius);
    number.setCharacterSize(radius * 1.5);
    center();
}

sf::FloatRect PoolBallNumber::getGlobalBounds() const
{
    return circle.getGlobalBounds();
}

void PoolBallNumber::setPosition(float x, float y)
{
    circle.setPosition(x, y);
    center();
}

void PoolBallNumber::setPosition(sf::FloatRect bounds)
{
    float radius = circle.getRadius();
    float x = bounds.width/2 + bounds.left;
    float y = bounds.height/2 + bounds.top;
    sf::FloatRect nBounds = number.getGlobalBounds();
    number.setPosition(x -nBounds.width/2, y - nBounds.height);
    circle.setPosition(x - radius, y - radius);
}

