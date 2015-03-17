#include <iostream>
using namespace std;

int main()
{
  //a
  long value1 = 200000;
  long value2;

  //b
  long * longPtr = &value1;

  //c
  cout << *longPtr << endl;

  //d
  value2 = *longPtr;

  //e
  cout << value2 << endl;

  //f
  cout << &value1 << endl;

  //g
  cout << &longPtr << endl; // The address will be different

  return 0;
}
