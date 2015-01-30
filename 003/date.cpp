#include <iostream>
#include "date.h"
using namespace std;

Date::Date(int newMonth, int newDay, int newYear)
{
    setMonth(newMonth);
    setDay(newDay);
    setYear(newYear);
}

void Date::setMonth(int newMonth)
{
    if (newMonth >= 1 && newMonth <= 12){
        month = newMonth;
    }
    else{
        month = 1;
    }
}

void Date::setDay(int newDay)
{
    day = newDay;
}

void Date::setYear(int newYear)
{
    year = newYear;
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

void Date::displayDate() const
{
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
