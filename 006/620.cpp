#include <iostream>
#include <array>
using namespace std;

bool multiple(int, int);

int main()
{

  const size_t ARRAY_SIZE = 10;

  array<int,ARRAY_SIZE> numbers = {5, 7, 22, 1, -5, 6, 8, 4, 100, 5};

  for(int counter = 0; counter < numbers.size(); counter += 2){
      cout << numbers[counter] << " is greater than " << numbers[counter + 1] << "? ";
      if(multiple(numbers[counter], numbers[counter + 1])){
        cout << "true" << endl;
      }
      else{
        cout << "false" << endl;
      }
  }

  return 0;
}

bool multiple(int num_a, int num_b)
{
  if(num_a > num_b){
    return true;
  }
  else{
    return false;
  }
}
