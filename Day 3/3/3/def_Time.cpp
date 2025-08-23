#include "Time.h"

Time::Time() {
    hh = 0;
    mm = 0;
    ss = 0;
}

Time::Time(int h, int m, int s) {
    if (h >= 0 && h < 24) hh = h; else hh = 0;
    if (m >= 0 && m < 60) mm = m; else mm = 0;
    if (s >= 0 && s < 60) ss = s; else ss = 0;
}

void Time::showTime() {
    cout << (hh < 10 ? "0" : "") << hh << ":"
        << (mm < 10 ? "0" : "") << mm << ":"
        << (ss < 10 ? "0" : "") << ss << endl;
}

void Time::checkDayOrNight() {
    if (hh >= 6 && hh < 18)
        cout << "This is Day Time." << endl;
    else
        cout << "This is Night Time." << endl;
}
