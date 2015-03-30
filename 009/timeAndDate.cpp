#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "timeAndDate.h"
using namespace std;

// Constructor

TimeAndDate::TimeAndDate(int newSecond,int newMinute,int newHour,int newMonth,int newDay,int newYear){
  setSecond(newSecond);
  setMinute(newMinute);
  setHour(newHour);
  setMonth(newMonth);
  setDay(newDay);
  setYear(newYear);
}

// Accessor methods

unsigned int TimeAndDate::getSecond() const
{
	return second;
}

unsigned int TimeAndDate::getMinute() const
{
	return minute;
}

unsigned int TimeAndDate::getHour() const
{
	return hour;
}

unsigned int TimeAndDate::getDay() const
{
  return day;
}

unsigned int TimeAndDate::getMonth() const
{
  return month;
}

unsigned int TimeAndDate::getYear() const
{
  return year;
}

// Mutator methods

void TimeAndDate::setSecond( int s )
{
	if ( s >= 0 && s < 60 ){
		second = s;
  }
	else{
		throw invalid_argument( " second must be 0- 59" );
  }
}

void TimeAndDate::setMinute( int m )
{
	if ( m >= 0 && m < 60 ){
		minute = m;
  }
	else{
		throw invalid_argument( " minute must be 0- 59" );
  }
}

void TimeAndDate::setHour( int h )
{
	if ( h >= 0 && h < 24 ){
		hour = h;
  }
	else{
		throw invalid_argument( " hour must be 0- 23" );
  }
}

void TimeAndDate::setMonth(int newMonth)
{
  if(isValidMonth(newMonth)){
    month = newMonth;
  }
  else
		throw invalid_argument( "month must be 1-12" );
}


void TimeAndDate::setDay(int newDay)
{
  if(isValidDayForCurrentMonth(newDay)){
    day = newDay;
  }
  else{
    throw invalid_argument("the entered day is not valid for this month");
  }
}

void TimeAndDate::setYear(int newYear)
{
  if(newYear >= 0){
    year = newYear;
  }
  else{
    throw invalid_argument("year must be 0 or greater");
  }
}

// Validation functions

bool TimeAndDate::isLeapYear() const
{
  if(getYear() % 400 == 0 || (getYear() % 4 == 0 && getYear() % 100 != 0)){
    return 1;
  }
  else{
    return 0;
  }
}

bool TimeAndDate::isValidMonth(int newMonth) const
{
  if(newMonth >= 1 && newMonth <= 12){
    return 1;
  }
  else{
    return 0;
  }
}

bool TimeAndDate::isValidDayForCurrentMonth(int newDay) const
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

bool TimeAndDate::isWithin31(int newDay) const
{
  if(newDay >= 1 && newDay <= 31){
    return 1;
  }
  else{
    return 0;
  }
}

bool TimeAndDate::isWithin30(int newDay) const
{
  if(newDay >= 1 && newDay <= 30){
    return 1;
  }
  else{
    return 0;
  }
}

bool TimeAndDate::isWithinFebruary(int newDay) const
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

// public methods

// print Time in universal- time format ( HH: MM: SS)
void TimeAndDate::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
		<< setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
  cout << " ";
  printDate();
  cout << endl;
}

// print Time in standard- time format ( HH: MM: SS AM or PM)
void TimeAndDate::printStandard() const
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
		<< ":" << setfill( '0' ) << setw( 2 ) << getMinute()
		<< ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
    cout << " ";
    printDate();
    cout << endl;
}

void TimeAndDate::tick(){
	incrementSecond();
}

// other utility methods

void TimeAndDate::printDate() const
{
  cout << getMonth() << '/' << getDay() << '/' << getYear();
}

void TimeAndDate::incrementSecond()
{
	if (getSecond() < 59){
		setSecond(getSecond() + 1);
	}
	else{
		setSecond(0);
		incrementMinute();
	}
}

void TimeAndDate::incrementMinute()
{
	if (getMinute() < 59){
		setMinute(getMinute() + 1);
	}
	else{
		setMinute(0);
		incrementHour();
	}
}

void TimeAndDate::incrementHour()
{
	if(getHour() < 23){
		setHour(getHour() + 1);
	}
	else{
		setHour(0);
    nextDay();
	}
}

void TimeAndDate::nextDay()
{
  incrementDay();
}

void TimeAndDate::incrementDay()
{
  if(isValidDayForCurrentMonth(getDay() + 1)){
    setDay(getDay() + 1);
  }
  else{
    setDay(1);
    incrementMonth();
  }
}

void TimeAndDate::incrementMonth()
{
  if(isValidMonth(getMonth() + 1)){
    month = getMonth() + 1;
  }
  else{
    month = 1;
    incrementYear();
  }
}

void TimeAndDate::incrementYear()
{
  year = getYear() + 1;
}
