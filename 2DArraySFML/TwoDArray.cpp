#include "TwoDArray.h"

TwoDArray::TwoDArray()
{
    for(int i=0; i<rowSize; i++)
    {
        *(arr +i) = new sf::RectangleShape[colSize];
    }
}
void TwoDArray::fillArray(float length, float width)
{
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            sf::RectangleShape r;
            r.setSize({float(rowSize), float(colSize)});
            *(*(arr + i) + j) = r;
        }
    }
}

void TwoDArray::draw(sf::RenderWindow &window)
{
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            window.draw(*(*(arr + i) + j));
        }
    }
}

sf::RectangleShape **TwoDArray::createArray(int rowSize, int colSize) {
    sf::RectangleShape** a = new sf::RectangleShape*[rowSize];
    for(int i=0; i<rowSize; i++)
        *(a+i) = new sf::RectangleShape[colSize];

    return a;
}

void TwoDArray::resize() {
    sf::RectangleShape** temp = createArray(rowSize*2, colSize*2);
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            *(*(temp + i) + j) = *(*(arr + i) + j);
        }

    }

    deleteArray();

    rowSize *= 2;
    colSize *= 2;

    arr = temp;
}

void TwoDArray::deleteArray() {
    for(int i=0; i<rowSize; i++)
        delete [] *(arr +i);
    delete [] arr;
}
