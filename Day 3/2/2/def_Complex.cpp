#include "Complex.h"

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(int r, int i) {
    real = r;
    imag = i;
}

int Complex::getReal() {
    return real;
}

int Complex::getImag() {
    return imag;
}

void Complex::setReal(int r) {
    real = r;
}

void Complex::setImag(int i) {
    imag = i;
}

void Complex::display() {
    cout << "Complex Number: " << real;
    if (imag >= 0)
        cout << " + " << imag << "i" << endl;
    else
        cout << " - " << -imag << "i" << endl;
}
