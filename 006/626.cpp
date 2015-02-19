#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double degreesFahrenheit);
double fahrenheit(double degreesCelsius);

const double CONVERSION_FRACTION = 1.8;
const int THIRTY_TWO = 32;

int main()
{
	cout << "Celsius || Fahrenheit" << " *||* " << "Fahrenheit || Celsius" << endl;

	unsigned int cCounter;
	double fCounter;;

	for(cCounter = 0, fCounter = 32; cCounter <= 100; cCounter++){
		cout << setw(7) << cCounter << setw(14) << fahrenheit(cCounter);
		cout << setw(16) << fCounter << setw(11) << celsius(fCounter) << endl;
		fCounter += 1.8;
	}

	return 0;
}

double celsius(double degreesFahrenheit)
{
	return (degreesFahrenheit - THIRTY_TWO) / CONVERSION_FRACTION;
}

double fahrenheit(double degreesCelsius)
{
	return degreesCelsius * CONVERSION_FRACTION +THIRTY_TWO;
}
