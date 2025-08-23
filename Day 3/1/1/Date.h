#include<iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int d, int m, int y); 
    Date(const Date& obj);   

    void showDate();
};
