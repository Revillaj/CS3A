#ifndef CS3A_DYNAMIC2D_TWODARRAY_H
#define CS3A_DYNAMIC2D_TWODARRAY_H
#include <iostream>
#include <SFML/Graphics.hpp>
class TwoDArray {
private:
    sf::RectangleShape** arr = new sf::RectangleShape*[1];
    int rowSize = 1, colSize = 1;

public:
    TwoDArray();
    void fillArray(float length, float width);
    sf::RectangleShape** createArray(int rowSize, int colSize);
    void resize();
    void deleteArray();
    void draw(sf::RenderWindow& window);
};


#endif
