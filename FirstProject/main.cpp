#include <iostream>
using namespace std;

// Declaration of functions
void ifelsetest();
void switchcase();
void arraytest();

int main()
{
    cout << "Im not sure how you want this to work but here you go.";
    cout << endl << endl;
    // calling functions
    ifelsetest();
    switchcase();
    arraytest();
    // end banter
    cout << "I didn't write functions for cin and cout because I used them throughout the program" << endl
        << "Apologies if you wanted me to make one specifically for that." << endl
        << "That's all, i dont have any more code :P";
    return(0);
}
//function that runs an if/else statement
void ifelsetest()
{
    char decision;
    cout << endl << "Start of If/Else function" << endl
         << "---------------------------" << endl
         << "Wanna see a if/else statement? y/n :";
    cin >> decision;
    if (decision == 'y' || decision == 'Y')
    {
        cout << "I dont know what you expected but here you are.";
    }
    else if (decision == 'n' || decision == 'N')
    {
        cout << "Alrighty then";
    }
    else
    {
        cout << "That wasn't an option but okay";
    }
    cout << endl << endl << "End of if else function"
        << endl << "---------------------------" << endl;
}
//function that runs a switch case statement
void switchcase()
{
    int CaseNumber;
    cout << endl << "Start of Switch/Case function" << endl
        << "---------------------------" << endl
        << "This, just like the last one, has no purpose" << endl
        << "pick a number from 1-5 and i'll tell you a fact:";
    cin >> CaseNumber;
    switch (CaseNumber)
    {
        case 1:
            cout << "A shrimp's heart is in its head.";
            break;
        case 2:
            cout << "There are 293 ways to make change for a dollar";
            break;
        case 3:
            cout << "Dreamt is the only English word that ends in the letters mt.";
            break;
        case 4:
            cout << "Los Angeles' full name is El Pueblo de Nuestra Senora la Reina de los Angeles de Porciuncula";
            break;
        case 5:
            cout << "Almonds are a member of the peach family.";
            break;
        default:
            cout << "not an option but you get a fact anyway: Apple Is Worth More Than The Entire Russian Stock Market.";
    }
    cout << endl << endl << "End of Switch/Case function"
         << endl << "---------------------------" << endl;
}
//function that creates an array
void arraytest()
{
    int arraystart(0);
    int graph[4][4];
    cout << endl << "Start of 2D Array function" << endl
         << "---------------------------" << endl
         << "Input a number and i'll fill a 4x4 array with the numbers that follow:";
    cin >> arraystart;
    // populates the array
    for(auto & row : graph)
    {
        for(int & columns : row)
        {
            columns = arraystart++;
        }
    }
    //reads the array
    for(auto & row : graph)
    {
        for(int columns : row)
        {
            cout << columns << "  ";
        }
        cout << endl;
    }
    cout << endl << "End of 2D Array function"
         << endl << "---------------------------" << endl;
}