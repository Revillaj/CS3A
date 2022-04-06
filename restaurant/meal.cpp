//
// Created by Jose Revilla on 2/22/22.
//
#include "meal.h"

Value meal::addItem(FoodItem)
{
    items.push_back(items);
}
Value meal::getTotalPrice()
{
    std::vector<Value> total(3);
    for(int i(0); i < items.size(); i++)
    {
        total += items[i].getNutitionalInfo().getItem(i).getValue().getValue();
    }
    NutitionalInfo t;
    t.setValue(total);
    return t;
}
std::vector<Value> getTotalNutritionalInfo()
{

}