#include <iostream>
using namespace std;

int main()
{
	double milesDriven = 0;
	double gallonsUsed = 0;
	double totalMilesDriven = 0;
	double totalGallonsUsed = 0;

	cout << "Enter miles driven (-1 to quit): ";

	cin >> milesDriven;

	while (milesDriven != -1)
	{
		totalMilesDriven += milesDriven;

		cout << "Enter gallons used: ";

		cin >> gallonsUsed;

		totalGallonsUsed += gallonsUsed;

		cout << "MPG this trip: " << milesDriven / gallonsUsed << endl;
		cout << "Total MPG: " << totalMilesDriven / totalGallonsUsed << endl;

		cout << "Enter miles driven (-1 to quit): ";

		cin >> milesDriven;
	}

	return 0;
}
