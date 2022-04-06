//
// Created by Jose Revilla on 3/28/22.
//

#include "ReversePolishNotation.h"


double ReversePolishNotation::solve(std::string Queue)
{
    stack <int> result;
    for(char C : Queue)
    {
        if(!isOperator(C))
        {
            result.push(to_Number(C));
        }
        else
        {
            char symbol = C;
            int right = result.Top();
            result.pop();
            int left = result.Top();
            result.pop();
            result.push(evaluate(right,left,symbol));
        }
    }
    return result.Top();
}

bool ReversePolishNotation::isOperator(char inLine)
{
    switch (inLine)
    {
        case '(':
        case '^':
        case '*':
        case '/':
        case '+':
        case '-':
        case ')':
            return true;
        default: return false;


    }
}

double ReversePolishNotation::evaluate(int right, int left, char symbol)
{
    switch(symbol)
    {
        case '^': return std::pow(left, right);
        case '*': return left * right;
        case '/': return left / right;
        case '+': return left + right;
        case '-': return left - right;
        default: return false;
    }
}

int ReversePolishNotation::to_Number(int C)
{
    return int(C) - 48;
}

int ReversePolishNotation::getOperatorValue(char c)
{
    switch(c)
    {
    case '(': case ')' :return PARENTHESIS;
        case '^': return EXPONENT;
        case '*': return MULTIPLICATION;
        case '/': return DIVISION;
        case '+': return ADDITION;
        case '-': return SUBTRACTION;
        default: return false;
    }
}

std::string ReversePolishNotation::convert(std::string Q)
{
    std::string Queue;
    stack<char> stack;
    for( char C : Q)
    {
        if(!isOperator(C))
        {
            Queue.push_back(C);
        }
        else
        {
            if(getOperatorValue(stack.Top()) < getOperatorValue(C))
            {
                stack.push(C);
            }
            else
            {
                for(char S : Queue)
                {
                    if(getOperatorValue(Queue.front()) > getOperatorValue(C))
                    {
                        Queue.po
                    }
                }
            }
        }
    }
    return std::string();
}


