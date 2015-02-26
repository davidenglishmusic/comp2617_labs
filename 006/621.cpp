#include <iostream>
#include <array>
using namespace std;

bool isEven(int);

int main()
{

  const size_t ARRAY_SIZE = 10;

  array<int,ARRAY_SIZE> numbers = {3, 67, 24, 0, 109, 5, 8, 46, 100, 5};

  for(auto number : numbers){
      cout << number << " is even? ";
      if(isEven(number)){
        cout << "true" << endl;
      }
      else{
        cout << "false" << endl;
      }
  }

  return 0;
}

bool isEven(int num)
{
  if(num % 2 == 0){
    return true;
  }
  else{
    return false;
  }
}
