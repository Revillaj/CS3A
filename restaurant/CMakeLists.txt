cmake_minimum_required(VERSION 3.21)
project(restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(restaurant main.cpp restaurant.cpp restaurant.h menu.cpp menu.h FoodItem.cpp FoodItem.h NutritionalItem.cpp NutritionalItem.h NutitionalInfo.cpp NutitionalInfo.h Value.cpp Value.h Name.cpp Name.h meal.cpp meal.h cart.cpp cart.h)
