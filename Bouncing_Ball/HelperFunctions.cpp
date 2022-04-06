//
// Created by Jose Revilla on 3/15/22.
//

#include <iostream>
#include "HelperFunctions.h"

void HelperFunctions::print(sf::FloatRect f)
{
    std::cout << "left: " << f.left << ", top: "
              << f.top << ", width: " << f.width << ", height: "
              <<f.height;
    std::cout << std::endl;
}

