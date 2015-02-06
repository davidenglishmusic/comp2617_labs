#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int hoursWorked = 0;
  double hourlyRate = 0.00;

  cout << "Enter hours worked (-1 to end): ";
  cin >> hoursWorked;

  while (hoursWorked != -1)
  {
    cout << "Enter hourly rate of the employee ($00.00): ";
    cin >> hourlyRate;

    cout << "Salary is $" << fixed << setprecision(2) << hoursWorked * hourlyRate << endl;

    cout << endl;

    cout << "Enter hours worked (-1 to end): ";
    cin >> hoursWorked;
  }

  return 0;
}
