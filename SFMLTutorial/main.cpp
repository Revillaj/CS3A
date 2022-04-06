#include <iostream>
#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(720,420,32), "SFML Starter");
    window.setFramerateLimit(60);
    sf::CircleShape circle;
    circle.setRadius(50);
    circle.setFillColor(sf::Color::Green);
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            {
                circle.move(10,10);
            }
        }
        window.clear();
        window.draw(circle);
        window.display();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
