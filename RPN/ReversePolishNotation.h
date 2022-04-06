//
// Created by Jose Revilla on 3/28/22.
//

#ifndef RPN_REVERSEPOLISHNOTATION_H
#define RPN_REVERSEPOLISHNOTATION_H
#include "stack.h"
#include "Queue.h"
#include <cmath>

class ReversePolishNotation
{
private:
    enum operators {SUBTRACTION = 3, ADDITION = 3, DIVISION = 2, MULTIPLICATION = 2, EXPONENT, PARENTHESIS};
    static bool isOperator(char inLine);
    static double evaluate(int right, int left, char symbol);
    static int to_Number(int C);
    static int getOperatorValue(char c);


public:
    static double solve(std::string Q);
    static std::string convert(std::string Q);

};


#endif //RPN_REVERSEPOLISHNOTATION_H
