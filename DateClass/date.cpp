//
// Created by Jose Revilla on 2/10/22.
//

#include "date.h"

void date::getDate()
{
    const int BASE_YEAR = 1900;
    time_t timer;
    tm * time;
    std::time(&timer);
    time = localtime(&timer);
    date = time->tm_mday;
    month = monthsNum[time->tm_mon];
//    day = days[time->tm_wday];
    year = time->tm_year + BASE_YEAR;
    std::cout << this->month << "/"
              << this->date  << "/" << this->year;
}

void date::getDate(std::string first, std::string second, std::string third)
{
    const int BASE_YEAR = 1900;
    time_t timer;
    tm * time;
    std::string dateReturn;
    std::time(&timer);
    time = localtime(&timer);
    date = time->tm_mday;
    month = monthsNum[time->tm_mon];
    year = time->tm_year + BASE_YEAR;



//    if(format == "YY-M-d")
//   std::cout << this->year << "/" << this->month << "/"
//              << this->date  << "/" << this->year;
    std::cout<<dateReturn;
}
