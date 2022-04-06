//
// Created by Jose Revilla on 2/9/22.
//

#include "vehicle.h"

vehicle::vehicle(){};
vehicle::vehicle(std::string make, std::string model, int year, std::string licensePlateNumber)
: licensePlateNumber(licensePlateNumber)
{
    vehicle::make = make;
    this -> model = model;
    vehicle::setyear(year);
}
vehicle::vehicle(std::string make, std::string model, int year)
: vehicle(make, model, year, "")
{
}
vehicle::vehicle(std::string make, int year)
        : vehicle(make, "", year)
{
}

vehicle::vehicle(int year)
: vehicle("", year)
{
}

bool vehicle::getcarState()
{
    return carState;
}
std::string vehicle::getmake()
{
    return make;
}
std::string vehicle::getmodel()
{
    this -> model = model;
}

int vehicle::getyear()
{
    return year;
}

std::string vehicle::getLicensePlateNumber()
{
    return licensePlateNumber;
}
void vehicle::setMake(std::string make)
{
    this -> make = make;
}
void vehicle::setmodel(std::string model)
{
    this -> model = model;
}
void vehicle::setyear(int year)
{
    this -> year = year;
}
void vehicle::setcarState(bool carState)
{
    this -> carState = carState;
}
void vehicle::print()
{
    std::cout << make << " " <<  model << " " << year << " " << licensePlateNumber << std::endl;
}

