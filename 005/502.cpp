#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Sum odd integers in between 1-99

	int sum = 1;

	for (int counter = 1; counter < 100; counter += 2)
	{
		sum += counter;
	}

	cout << "The sum of the odd integers in between 1 - 99 is " << sum << endl;

	cout << "\n" << endl;

	//Print 333.546372 in a 15 character field with variations of precision

	const double SPECIAL_NUMBER = 333.546372;

	cout << left << setw(15);

	cout << setprecision(1) << SPECIAL_NUMBER << endl;
	cout << setprecision(2) << SPECIAL_NUMBER << endl;
	cout << setprecision(3) << SPECIAL_NUMBER << endl;

	cout << "\n" << endl;

	//Calculate the value of 2.5 raised to the power 3 using function pow.

	const float TWO_POINT_FIVE = 2.5;
	const int THREE = 3;

	cout << setw(10) << setprecision(10);

	cout << pow(TWO_POINT_FIVE, THREE) << endl;

	cout << "\n" << endl;

	//Print the integers from 1 to 20 using a while loop and the unsigned int counter variable x.

	const int TWENTY = 20;

	unsigned int x = 1;

	while (x <= TWENTY)
	{
		if (x % 5 == 0){
			cout << x << "\n";
		}
		else{
			cout << x << "\t";
		}

		++x;
	}

	cout << "\n" << endl;

	//Print the integers from 1 to 20 using a for loop and the unsigned int counter variable x.

	for (x = 1; x <= TWENTY; x++)
	{
		if (x % 5 == 0){
			cout << x << "\n";
		}
		else{
			cout << x << "\t";
		}
	}

	cout << "\n" << endl;
}