#include <iostream>
#include <SFML/Graphics.hpp>
#include "TwoDArray.h"
int main() {
    sf::RenderWindow window({720, 420, 32}, "2DArray");
    window.setFramerateLimit(60);
    TwoDArray arr;
    arr.fillArray(50, 50);
    while(window.isOpen())
    {
        sf::Event event{};
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                std::cout << "Up arrow pressed";
                arr.deleteArray();
                arr.setRowSize()
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                std::cout << "Down arrow pressed";
            }
        }

        window.clear();
        arr.draw(window);
        window.display();
    }
    return 0;
}
