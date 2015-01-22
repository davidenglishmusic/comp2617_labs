/* Write a program that reads in two integers and detmerines and prints if the first is a multiple of the second */

#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  int y = 0;

  cout << "Please enter two integers seperated by a space.( ie. 5 7 ): ";
  cin >> x >> y;

  if(x % y == 0){
    cout << x << " is a multiple of " << y << endl;
  }
  else{
    cout << x << " is not a multiple of " << y << endl;
  }

  return 0;
}
