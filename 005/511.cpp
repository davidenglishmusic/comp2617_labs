#include <iostream>
#include <iomanip>
#include <cmath> // standard math library
using namespace std;

void display_amount(double amount, double principal, double rate);

int main()
{
	double amount; // amount on deposit at end of each year
	double principal = 1000.0; // initial amount before interest
	double rates[] = { .05, .06, .07, .08, .09, 0.1 }; // annual interest rates

	// set floating- point number format
	cout << fixed << setprecision( 2 );

  for(unsigned int rateCounter = 0; rateCounter <= 5; rateCounter++){

		// display headers
		cout << "Interest rate: " << rates[rateCounter] << endl;
		cout << " Year" << setw(21) << " Amount on deposit" << endl;

		for (unsigned int year = 1; year <= 10; ++year) {
			// calculate new amount for specified year
			amount = principal * pow( 1.0 + rates[rateCounter], year );
			// display the year and the amount
			cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
		}
		cout << endl;
	}

} // end main
