//
// Created by Jose Revilla on 2/22/22.
//

#ifndef RESTAURANT_NUTITIONALINFO_H
#define RESTAURANT_NUTITIONALINFO_H


#include <vector>
#include "NutritionalItem.h"

class NutitionalInfo {
private:
    std::vector<NutritionalItem> items;

public:
    void addItem(NutritionalItem item);
    NutritionalItem getItem(int index);

};


#endif //RESTAURANT_NUTITIONALINFO_H
