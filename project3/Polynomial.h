//
// Created by Jose Revilla on 4/4/22.
//
#ifndef PROJECT3_POLYNOMIAL_H
#define PROJECT3_POLYNOMIAL_H
#include <list>
#include <initializer_list>
#include <stack>
#include <ostream>

class Polynomial
{
private:
    std::list<int> data;

public:
    Polynomial();
    Polynomial(const std::initializer_list<int>& list);
    Polynomial(const std::string& polynomial);
    std::string toString();
    friend std::ostream& operator<<(std::ostream& out, const Polynomial& polynomial);
    friend Polynomial& operator+(const Polynomial& P1, const Polynomial& P2);
    friend Polynomial& operator-(const Polynomial& P1, const Polynomial& P2);
    friend Polynomial& operator*(const Polynomial& P1, const Polynomial& P2);
};


#endif //PROJECT3_POLYNOMIAL_H
