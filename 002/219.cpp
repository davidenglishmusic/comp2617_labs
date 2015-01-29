#include <iostream>
using namespace std;

int main()
{

  int x = 0;
  int y = 0;
  int z = 0;

  cout << "Please enter three integers: ";

  cin >> x >> y >> z;

  cout << "Sum is " << x + y + z << "\n";

  cout << "Average is " << (x + y + z) / 3 << "\n";

  cout << "Product is " << x * y * z << "\n";

  int smallest = 0;

  if ( x < y && x < z ){
    smallest = x;
  }
  else if ( y > z ){
    smallest = y;
  }
  else{
    smallest = z;
  }

  cout << "Smallest is " << smallest << "\n";

  int largest = 0;

  if ( x > y && x > z ){
    largest = x;
  }
  else if ( y > z ){
    largest = y;
  }
  else{
    largest = z;
  }

  cout << "Largest is " << largest << endl;

  return 0;
}
