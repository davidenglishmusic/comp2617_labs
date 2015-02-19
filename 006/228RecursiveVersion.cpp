#include <iostream> // allows program to perform input and output
#include <climits> // defines limits like ULLONG_MAX
using namespace std; // program uses names from the std namespace

//Recursive function that displays digits of an unsigned long long
//Displays all of the digits but the very last one, which it returns
unsigned int printDigits(unsigned long long);
unsigned int long getDivisor(unsigned long long value);

const int BASE = 10;
const int LOWER_LIMIT = 10;

int main()
{
   unsigned long long number; // integer read from user

   cout << "Enter a positive integer up to value " << ULLONG_MAX << " :";// prompt
   cin >> number; // read integer from user

   cout << "\nThe digits are: ";

   cout << printDigits(number); //last digit is returned, so it must be displayed as well

   cout << '\n' << endl;

   return 0;

} // end main

// This function uses a recursive algorithm to display the digits of value one by one.
// Note that the last digit is returned to the calling program, which must display that digit,
//     which might be considered a bug.  How could we make the function smart enough
//     to know it is about to do the last "return" and display the digit before returning it,
//     thereby not requiring the calling program to do so?

unsigned int printDigits(unsigned long long value)
{
  if(value <= LOWER_LIMIT){
    return value;
  }
  else{
    cout << value / getDivisor(value) << " ";
    printDigits(value % getDivisor(value));
  }
	// Hint- you keep invoking function until you find the last digit.  Then you start
	//   returning.  That first return will return the last digit found and the eventual last return
	//   will return the first digit found.
}

// Get the largest base divisor ie. 10000 for 55783
unsigned long int getDivisor(unsigned long long value)
{
  unsigned long int divisor = 1;
  do {
    divisor *= BASE;
    value /= BASE;
  } while(value >= LOWER_LIMIT);

  return divisor;
}
