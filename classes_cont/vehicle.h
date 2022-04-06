//
// Created by Jose Revilla on 2/9/22.
//

#ifndef CLASSES_CONT_VEHICLE_H
#define CLASSES_CONT_VEHICLE_H
#include <string>
#include <iostream>

class vehicle{
private:

    bool carState;
    std::string make;
    std::string model;
    int year;
    std::string licensePlateNumber;

public:
    vehicle();
    vehicle(std::string make, std::string model, int year, std::string licensPlaceNumber);
    vehicle(std::string make, std::string model, int year);
    vehicle(int year);
    vehicle(std::string make, int year);


    bool getcarState();
    std::string getmake();
    std::string getmodel();
    int getyear();

    std::string getLicensePlateNumber();
    void setMake(std::string make);
    void setmodel(std::string model);
    void setyear(int year);
    void setcarState(bool carState);
    void print();







};


#endif //CLASSES_CONT_VEHICLE_H
