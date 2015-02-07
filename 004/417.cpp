#include <iostream>
using namespace std;

int main()
{
  int largest = 0;
  unsigned int counter = 1;

  while (counter <= 10)
  {
    int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "You entered: " << number << endl;

    if (number > largest)
    {
      largest = number;
    }

    ++counter;
  }

  cout << "The largest number that you entered is " << largest << endl;

  return 0;
}
