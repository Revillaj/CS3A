//
// Created by Jose Revilla on 4/4/22.
//

#include "Polynomial.h"

Polynomial::Polynomial()
{

}

Polynomial::Polynomial(const std::initializer_list<int> &list)
{
    for(auto i : list)
    {
        data.push_back(i);
    }
}

Polynomial::Polynomial(const std::string &polynomial)
{

}

std::string Polynomial::toString()
{
    return std::string();
}
