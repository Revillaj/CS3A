#include <iostream>
#include "vehicle.h"
int main() {
    vehicle bmw("BMW", "325i", 2002);
    bmw.print();
    vehicle Car(2022);
    Car.print();
    vehicle Car2;
    Car2.print();
    vehicle car3("BMW", 2002);
    car3.print();



    return 0;
}
