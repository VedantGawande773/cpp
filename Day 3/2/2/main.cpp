#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    
    Complex c1;
    cout << "Default Constructor: ";
    c1.display();

    Complex c2(3, -4);
    cout << "Parameterized Constructor: ";
    c2.display();

    c1.setReal(5);
    c1.setImag(7);
    cout << "After using setters: ";
    c1.display();

    cout << "Real part of c1 = " << c1.getReal() << endl;
    cout << "Imaginary part of c1 = " << c1.getImag() << endl;

    return 0;
}
