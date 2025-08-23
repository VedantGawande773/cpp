#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p1;
    cout << "Default Constructor: ";
    p1.showPoint();
    p1.checkQuadrant();

    Point p2(5, 7);
    cout << "\nParameterized Constructor: ";
    p2.showPoint();
    p2.checkQuadrant();

    Point p3(-4, -9);
    cout << "\nAnother Point: ";
    p3.showPoint();
    p3.checkQuadrant();

    Point p4(0, 6);
    cout << "\nPoint on Axis: ";
    p4.showPoint();
    p4.checkQuadrant();

    return 0;
}
