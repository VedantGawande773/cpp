#include "Box.h"

// Default constructor
Box::Box() {
    height = 1.0;
    width = 1.0;
    depth = 1.0;
}

// Parameterized constructor
Box::Box(double h, double w, double d) {
    height = h;
    width = w;
    depth = d;
}

// Function to calculate volume
double Box::calculateVolume() {
    return height * width * depth;
}
