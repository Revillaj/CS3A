#include <iostream>
#include "ReversePolishNotation.h"

int main()
{
    ReversePolishNotation RPN;
    std::cout << RPN.solve("135+84+*-76*+");

}
