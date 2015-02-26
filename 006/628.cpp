#include <iostream>
using namespace std;

bool isPerfect(int);

int main()
{
  const int UPPER_LIMIT = 1000;

  cout << "Here is a list of perfect numbers ranging from 1 to ";
  cout << UPPER_LIMIT << ":" << endl;

  for(unsigned int counter = 1; counter <= UPPER_LIMIT; counter++){
    if(isPerfect(counter) == 1){
      cout << counter << endl;
    }
  }

  return 0;
}

bool isPerfect(int num)
{
  int perfectSum = 0;
  for(unsigned int counter = 1; counter <= num / 2; counter++){
    if(num % counter == 0){
      perfectSum += counter;
    }
  }

  if(perfectSum == num){
    return true;
  }
  else{
    return false;
  }
}
