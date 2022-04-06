//
// Created by Jose Revilla on 3/30/22.
//

#include "recursion.h"

void recursion::iterate(int startNum)
{
    Linkedlist<int> N;

}

int recursion::lengthofint(int startNum)
{
    if(startNum < 10)
    {
        this->length++;
        return this->length;
    }
    else
    {
        this->length++;
        lengthofint(startNum/10);
    }
    return 0;
}
