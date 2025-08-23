#include<iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point();
	Point(int xVal,int yVal);

	void showPoint();
	void checkQuadrant();

};