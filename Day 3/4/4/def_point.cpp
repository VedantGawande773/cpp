#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int xVal, int yVal) {
    x = xVal;
    y = yVal;
}

void Point::showPoint() {
    cout << "[" << x << ", " << y << "]" << endl;
}

void Point::checkQuadrant() {
    if (x > 0 && y > 0)
        cout << "Point lies in Quadrant I" << endl;
    else if (x < 0 && y > 0)
        cout << "Point lies in Quadrant II" << endl;
    else if (x < 0 && y < 0)
        cout << "Point lies in Quadrant III" << endl;
    else if (x > 0 && y < 0)
        cout << "Point lies in Quadrant IV" << endl;
    else if (x == 0 && y == 0)
        cout << "Point lies at the Origin" << endl;
    else if (x == 0)
        cout << "Point lies on Y-axis" << endl;
    else if (y == 0)
        cout << "Point lies on X-axis" << endl;
}
