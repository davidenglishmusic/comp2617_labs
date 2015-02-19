#include <iostream>
using namespace std;

int gcd(int numA, int numB);
int gcdLoop(int numA, int numB);

int main()
{

  cout << "The highest common divisor between 27 and 6 is " << gcd(27, 6) << endl;
  cout << "The highest common divisor between 32 and 128 is " << gcd(32, 128) << endl;
  cout << "The highest common divisor between 0 and 5 is " << gcd(0, 5) << endl;

  return 0;
}

int gcd(int numA, int numB)
{
  //Start with a guard clause for numbers if either is 0
  if (numA == 0 || numB == 0){
    return 1;
  }
  if (numB > numA){
    return gcdLoop(numB, numA);
  }
  else{
    return gcdLoop(numA, numB);
  }
}

int gcdLoop(int numA, int numB)
{
  do{
    if (numA % numB == 0){
      return numB;
    }
    --numB;
  }while(numB >= 1);
}
