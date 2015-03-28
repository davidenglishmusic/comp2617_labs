#include <iostream>
#include <array>
#include "time.h"
using namespace std;

int main()
{
  array<Time, 4> times = {Time(5,55,55), Time(5,55,59), Time(5,59,59), Time(23,59,59)};

  for ( auto time : times){
    time.printStandard();
    cout << " incremented by 1 second sets the new time to: ";
    time.tick();
    time.printStandard();
    cout << endl;
  }

  return 0;
}
