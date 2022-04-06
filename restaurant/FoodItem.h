//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_FOODITEM_H
#define RESTAURANT_FOODITEM_H
#include "Value.h"
#include "Name.h"
#include "NutitionalInfo.h"
#include "NutritionalItem.h"

class FoodItem {
private:
    Value price;
    Name name;
    NutitionalInfo nutritionalInfo;

public:
    void display();
    void userselection();

    Value getprice();
    Name getname();
    NutitionalInfo getNutitionalInfo();

    void setPrice(Value Price);
    void setName(Name name);
    void setNutitionalInfo(NutitionalInfo nutritionalInfo);

    void addNutitionalItem(NutritionalItem item)

};


#endif //RESTAURANT_FOODITEM_H
