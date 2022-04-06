//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_MEAL_H
#define RESTAURANT_MEAL_H
#include <Vector>
#include "FoodItem.h"


class meal {
private:
    std::vector<FoodItem> items;
    Value total;

public:
    void addItem(FoodItem);
    Value getTotalPrice();
    std::vector<Value> getTotalNutritionalInfo();

};


#endif //RESTAURANT_MEAL_H
