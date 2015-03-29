#include <iostream>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date. h
using namespace std;

Date::Date( int m, int d, int y )
{
  setMonth(m);
  setDay(d);
  setYear(y);
}

void Date::setMonth(int newMonth)
{
  if(isValidMonth(newMonth)){
    month = newMonth;
  }
  else
		throw invalid_argument( "month must be 1-12" );
}

int Date::getMonth() const
{
  return month;
}

void Date::setDay(int newDay)
{
  if(isValidDayForCurrentMonth(newDay)){
    day = newDay;
  }
  else{
    throw invalid_argument("the entered day is not valid for this month");
  }
}

int Date::getDay() const
{
  return day;
}

void Date::setYear(int newYear)
{
  if(newYear >= 0){
    year = newYear;
  }
  else{
    throw invalid_argument("year must be 0 or greater");
  }
}

int Date::getYear() const
{
  return year;
}

bool Date::isLeapYear() const
{
  if(getYear() % 400 == 0 || (getYear() % 4 == 0 && getYear() % 100 != 0)){
    return 1;
  }
  else{
    return 0;
  }
}

// print Date in the format mm/ dd/ yyyy
void Date::print() const
{
  cout << getMonth() << '/' << getDay() << '/' << getYear();
} // end function print

void Date::nextDay()
{
  incrementDay();
}

void Date::incrementDay()
{
  if(isValidDayForCurrentMonth(getDay() + 1)){
    setDay(getDay() + 1);
  }
  else{
    setDay(1);
    incrementMonth();
  }
}

void Date::incrementMonth()
{
  if(isValidMonth(getMonth() + 1)){
    month = getMonth() + 1;
  }
  else{
    month = 1;
    incrementYear();
  }
}

void Date::incrementYear()
{
  year = getYear() + 1;
}

bool Date::isValidMonth(int newMonth) const
{
  if(newMonth >= 1 && newMonth <= 12){
    return 1;
  }
  else{
    return 0;
  }
}

bool Date::isValidDayForCurrentMonth(int newDay) const
{
  switch (getMonth())
  {
    case 1:
      return isWithin31(newDay);
    case 2:
      return isWithinFebruary(newDay);
    case 3:
      return isWithin31(newDay);
    case 4:
      return isWithin30(newDay);
    case 5:
      return isWithin31(newDay);
    case 6:
      return isWithin30(newDay);
    case 7:
      return isWithin31(newDay);
    case 8:
      return isWithin31(newDay);
    case 9:
      return isWithin30(newDay);
    case 10:
      return isWithin31(newDay);
    case 11:
      return isWithin30(newDay);
    case 12:
      return isWithin31(newDay);
    default:
      throw invalid_argument("default case reached and should not be - check month");
      break;
  }
}

bool Date::isWithin31(int newDay) const
{
  if(newDay >= 1 && newDay <= 31){
    return 1;
  }
  else{
    return 0;
  }
}

bool Date::isWithin30(int newDay) const
{
  if(newDay >= 1 && newDay <= 30){
    return 1;
  }
  else{
    return 0;
  }
}

bool Date::isWithinFebruary(int newDay) const
{
  if(isLeapYear()){
    if(newDay >= 1 && newDay <= 29){
      return 1;
    }
  }
  if(newDay >= 1 && newDay <= 28){
    return 1;
  }
  return 0;
}
