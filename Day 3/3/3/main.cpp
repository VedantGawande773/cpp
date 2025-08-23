#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    // Default time
    Time t1;
    cout << "Default Constructor: ";
    t1.showTime();
    t1.checkDayOrNight();

    // Parameterized constructor
    Time t2(14, 30, 45);
    cout << "Parameterized Constructor: ";
    t2.showTime();
    t2.checkDayOrNight();

    // Another example for night time
    Time t3(22, 15, 10);
    cout << "Another Time: ";
    t3.showTime();
    t3.checkDayOrNight();

    return 0;
}
