#include <iostream>
#include <iomanip>
using namespace std;

const double BASE_PAY = 200.00;
const double COMISSION = 0.09;

int main()
{
	double sales = 0;

	cout << "Enter sales in dollars (-1 to end): ";
	cin >> sales;

	while (sales != -1)
	{
		cout << "Salary is $" << fixed << setprecision(2) << BASE_PAY + COMISSION * sales << endl;
		cout << endl;

		cout << "Enter sales in dollars (-1 to end): ";
		cin >> sales;
	}

	return 0;
}
