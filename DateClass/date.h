//
// Created by Jose Revilla on 2/10/22.
//

#ifndef DATECLASS_DATE_H
#define DATECLASS_DATE_H
#include <ctime>
#include <iostream>


class date{

private:
    std::string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    std::string monthsFull[12] = {"January", "February", "March", "April",
                                  "May", "June", "July", "August", "September",
                                  "October", "November", "December"};

    std::string monthsNum[12] = {"1", "2", "3", "4", "5", "6",
                              "7", "8", "9", "10", "11", "12"};


    std::string month;
    int date;
    int year;

public:
    void getDate();
    void getDate(std::string first, std::string second, std::string third);




};


#endif //DATECLASS_DATE_H
