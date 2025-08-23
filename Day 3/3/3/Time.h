#include<iostream>
using namespace std;

class Time {
private:
	int hh;
	int mm;
	int ss;

public:
	Time();
    Time(int h,int m,int s);

    void showTime();
    void checkDayOrNight();


};