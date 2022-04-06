//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_RESTAURANT_H
#define RESTAURANT_RESTAURANT_H


#include "menu.h"

class restaurant {
private:
    menu menu;

public:
    FoodItem getFoodItem();
    void addFoodItem(FoodItem foodItem)
    void display();


};


#endif //RESTAURANT_RESTAURANT_H
