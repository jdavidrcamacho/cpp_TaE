#include <iostream>
#include "bDay.h"
using namespace std;

bDay::bDay(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void bDay::printDate()
{
    cout << day << "/" << month << "/" << year << endl;
}
