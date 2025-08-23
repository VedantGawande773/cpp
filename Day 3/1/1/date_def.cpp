#include "Date.h"

Date::Date()
{
	day = 1;
	month = 1;
	year = 2000;
}

Date::Date(int dd, int mm, int yy)
{
	day = dd;
	month = mm;
	year = yy;
}

Date::Date(const Date& obj)
{
	day = obj.day;
	month = obj.month;
	year = obj.year;
}


void Date::showDate()
{
	cout << "Date: " << day << "/" << month << "/" << year << endl;
}
