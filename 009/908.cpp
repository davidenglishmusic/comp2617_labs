#include <iostream>
#include <array>
#include "Date.h"
using namespace std;

int main()
{
  Date date1( 7, 4, 2004 );
  Date date2;
  cout << "date1 = ";
  date1.print();
  cout << "\ndate2 = ";
  date2.print();

  date2 = date1;

  cout << "\n\nAfter default memberwise assignment, date2 = ";
  date2. print();
  cout << "\n" << endl;

  array<Date, 6> dates = {date1, Date(1,31,1990), Date(6,30,2010), Date(2,28,1999), Date(2,28,2000), Date(12,31,1999)};

  for ( auto date : dates){
    date.print();
    cout << " incremented by 1 day sets the new date to: ";
    date.incrementDate();
    date.print();
    cout << endl;
  }

  return 0;
}
