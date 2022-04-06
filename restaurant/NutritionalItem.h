//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_NUTRITIONALITEM_H
#define RESTAURANT_NUTRITIONALITEM_H


#include "Name.h"
#include "Value.h"

class NutritionalItem {
private:
    Name itemName;
    Value value;

public:
    Name getItemName();
    Value getValue();

    void setItemName(Name itemName);
    void setValue(Value value);
};


#endif //RESTAURANT_NUTRITIONALITEM_H
