#include<iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d1;
    cout << "Default Constructor: ";
    d1.showDate();

    Date d3(25, 8, 2025);
    cout << "Parameterized Constructor: ";
    d3.showDate();

    Date d2(d3);  // Calls copy constructor
    cout << "Copy Constructor: ";
    d2.showDate();

    return 0;
}
