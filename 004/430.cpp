#include <iostream>
using namespace std;

const double PI = 3.14159;

int main()
{
  double radius = 0;

  cout << "Enter the radius of a circle (-1 to quit): ";
  cin >> radius;

  while(radius != -1)
  {
    cout << "Diameter: " << 2 * radius << endl;
    cout << "Circumference: " << 2 * PI * radius << endl;
    cout << "Area: " << PI * radius * radius << endl;

    cout << endl;

    cout << "Enter the radius of a circle (-1 to quit): ";
    cin >> radius;
  }


}
