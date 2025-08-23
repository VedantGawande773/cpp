#include<iostream>
using namespace std;

class Box {
private:
	double height, width, depth;

public:
	Box();
	Box(double h, double w, double d);

	double calculateVolume();

};