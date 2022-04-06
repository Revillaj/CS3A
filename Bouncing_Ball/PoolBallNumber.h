//
// Created by Jose Revilla on 3/15/22.
//

#ifndef BOUNCING_BALL_POOLBALLNUMBER_H
#define BOUNCING_BALL_POOLBALLNUMBER_H
#include <SFML/Graphics.hpp>

class PoolBallNumber : public sf::Drawable //need this so window can draw this
{
private:
    sf::CircleShape circle;
    sf::Text number;
    static sf::Font font;
    void setupText();

public:
    PoolBallNumber();
    PoolBallNumber(int number);

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void setNumber(int number);
    void setRadius(float radius);
    void center();
    sf::FloatRect getGlobalBounds() const;
    void setPosition(float x, float y);
    void setPosition(sf::FloatRect bounds);
};

#endif //BOUNCING_BALL_POOLBALLNUMBER_H
