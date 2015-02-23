#include <iostream>
using namespace std;

void towers( unsigned int, unsigned int, unsigned int, unsigned int );

int main()
{
   int nDisks;

   cout << "Enter the starting number of disks: ";
   cin >> nDisks;

   towers( nDisks, 1, 3, 2 );
}

void towers( unsigned int disks, unsigned int start, unsigned int end, unsigned int temp )
{

  if(disks <= 1){
    cout << start << " -> " << end << endl;
  }
  else{
    towers(disks - 1, start, temp, end);
    cout << start << " -> " << end << endl;
    towers(disks - 1, temp, end, start);
  }
}
