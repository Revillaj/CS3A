#include <iostream>

void swap(int* a, int *b);
void print(int a, int b);
//void swap (int& a, int& b);

int main()
{
  int x(0), y(1);
  int *a = &x;
  int *b = &y;
  print(x, y );
  swap(a,b);
  print(x, y);

}

void swap (int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;

}
//void swap (int& a, int& b)
//{
//    int c = a;
//    a = b;
//    b = c;
//
//}
void print(int a, int b)
{
    std::cout << "a: " << a << ", b: " << b << std::endl;

}