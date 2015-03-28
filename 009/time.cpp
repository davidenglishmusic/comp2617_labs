// Fig. 9.5: Time. cpp
// Member- function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

// default constructor
Time::Time(int newHour,int newMinute, int newSecond)
{
	setTime(newHour, newMinute, newSecond);
}

// set new Time value using universal time
void Time::setTime( int h, int m, int s )
{
	setHour( h ); // set private field hour
	setMinute( m ); // set private field minute
	setSecond( s ); // set private field second
} // end function setTime

// set hour value
void Time::setHour( int h )
{
	if ( h >= 0 && h < 24 )
		hour = h;
	else
		throw invalid_argument( " hour must be 0- 23" );
} // end function setHour

// set minute value
void Time::setMinute( int m )
{
	if ( m >= 0 && m < 60 )
		minute = m;
	else
		throw invalid_argument( " minute must be 0- 59" );
} // end function setMinute

// set second value
void Time::setSecond( int s )
{
	if ( s >= 0 && s < 60 )
		second = s;
	else
		throw invalid_argument( " second must be 0- 59" );
} // end function setSecond

// return hour value
unsigned int Time::getHour() const
{
	return hour;
} // end function getHour

// return minute value
unsigned Time::getMinute() const
{
	return minute;
} // end function getMinute

// return second value
unsigned Time::getSecond() const
{
	return second;
} // end function getSecond

// print Time in universal- time format ( HH: MM: SS)
void Time::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
		<< setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal

// print Time in standard- time format ( HH: MM: SS AM or PM)
void Time::printStandard() const
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
		<< ":" << setfill( '0' ) << setw( 2 ) << getMinute()
		<< ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard

// increments the time by one second
void Time::tick(){
	incrementSecond();
}

// increments the time by one second
void Time::incrementSecond()
{
	if (getSecond() < 59){
		setSecond(getSecond() + 1);
	}
	else{
		setSecond(0);
		incrementMinute();
	}
}

// increments the time by one minute
void Time::incrementMinute()
{
	if (getMinute() < 59){
		setMinute(getMinute() + 1);
	}
	else{
		setMinute(0);
		incrementHour();
	}
}

// increments the time by one hour
void Time::incrementHour()
{
	if(getHour() < 23){
		setHour(getHour() + 1);
	}
	else{
		setHour(0);
	}
}
