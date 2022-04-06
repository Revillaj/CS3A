//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_MENU_H
#define RESTAURANT_MENU_H
#include <vector>
#include "FoodItem.h"


class menu {
private:
    std::vector<FoodItem> foodItems;

public:
    void display();
    void addFoodItem(FoodItem foodItem);
    FoodItem getFoodItem(int index);

};


#endif //RESTAURANT_MENU_H
