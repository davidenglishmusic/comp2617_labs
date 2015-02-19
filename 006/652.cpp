#include <iostream>
using namespace std;

template < typename T>
T minimum(T value1, T value2)
{
  T minimumValue = value1;
  if (value2 < value1){
    minimumValue = value2;
  }
  return minimumValue;
}

int main()
{

  cout << "The lower value in comparing 6 and 9 is " << minimum(6, 9) << endl;
  cout << "The lower value in comparing 7.5 and 1.3 is " << minimum(7.5, 1.3) << endl;
  cout << "The lower value in comparing D and G is " << minimum('D', 'G') << endl;

  return 0;
}
