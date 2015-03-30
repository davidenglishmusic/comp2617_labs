#include <iostream>
#include <array>
#include "timeAndDate.h"
using namespace std;

int main()
{
  TimeAndDate td1( 0, 0, 0, 7, 4, 2004 );
  td1.printUniversal();
  td1.printStandard();

  TimeAndDate td2(59,59,23,12,31,1999);
  td2.printUniversal();
  td2.printStandard();

  cout << "increment by 1 second" << endl;
  td2.tick();
  td2.printUniversal();
  td2.printStandard();

  return 0;
}
