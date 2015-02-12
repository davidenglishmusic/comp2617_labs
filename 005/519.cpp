#include <iostream>
#include <iomanip>
// #include <climits> // Enable if using ULLONG_MAX
using namespace std;

int main()
{
  const int PRINT_POINT = 50;
  const double FOUR = 4.0;
  const int DESIRED_PRECISION = 50;
  int HIGH_LIMIT = 10000;
  //HIGH_LIMIT = ULLONG_MAX;
  double pi = 4;
  unsigned long int denominator = 3;
  unsigned long int termCounter = 1;

  cout << fixed << setprecision(DESIRED_PRECISION);

  while (termCounter <= HIGH_LIMIT)
  {
    pi -= FOUR / denominator;
    pi += FOUR / (denominator + 2);
    denominator += 4;
    termCounter += 2;
    if((termCounter - 1) % PRINT_POINT == 0){
      cout << pi << endl;
    }
  }
}
