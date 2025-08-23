#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    // Default constructor
    Box b1;
    cout << "Default Box Volume = " << b1.calculateVolume() << endl;

    // Parameterized constructor
    Box b2(3.5, 2.0, 4.0);
    cout << "Parameterized Box Volume = " << b2.calculateVolume() << endl;

    Box b3(10, 5, 2);
    cout << "Another Box Volume = " << b3.calculateVolume() << endl;

    return 0;
}
