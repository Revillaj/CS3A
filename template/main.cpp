#include <iostream>
#include "function.h"
#include <vector>
int main()
{
    int size(10);
    int arr[size];
    char carr[size];

    fillArray(arr, size);
    printArray(arr,size);

    std::cout << "Vector " << std::endl;
    fillArray(carr, size);
    printArray(carr,size);


    return 0;
}
