#include "Fileio.h"


int main()
{
    srand(time(NULL));
    //writeToFile("names.txt", getUserInput("Enter Name or Exit with -1", "-1"));
    std::cout << getRandomLine("names.txt");
    return 0;
}

