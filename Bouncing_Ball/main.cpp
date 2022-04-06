#include <SFML/Graphics.hpp>
#include "PoolBall.h"
int main() {
    sf::RenderWindow window({1080, 720, 32},"Pool_Ball");
    window.setFramerateLimit(30);

    sf::CircleShape circle;
    sf::Text number;

    PoolBall ball;
    ball.setRadius(100);
    PoolBall PB[100];
    for(int i=0; i<100; i++)
    {
        PB[i].setVelocity(i + 1, i + 1);
        PB[i].setRadius((i + 1) / 2);
    }


    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();

        }
        for(int i=0; i<100; i++)
            PB[i].bounce();
        ball.bounce();

        window.clear(sf::Color::Green);
        window.draw(ball);
        window.display();


    }
    return 0;
}