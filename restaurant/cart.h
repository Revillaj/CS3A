//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_CART_H
#define RESTAURANT_CART_H
#include <vector>
#include "meal.h"
#include "Value.h"


class cart {
private:
    std::vector<meal> meals;
public:
    Value getTotalPrice();
    std::vector<Value> getTotalNutritionalInfo();
};


#endif //RESTAURANT_CART_H
