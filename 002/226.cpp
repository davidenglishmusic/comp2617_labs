/* Display a checkboard pattern first with 8 cout statements and then with as few lines as possible */
#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "* * * * * * * *" << endl;
  cout << " * * * * * * * *" << endl;
  cout << "* * * * * * * *" << endl;
  cout << " * * * * * * * *" << endl;
  cout << "* * * * * * * *" << endl;
  cout << " * * * * * * * *" << endl;
  cout << "* * * * * * * *" << endl;
  cout << " * * * * * * * *" << endl;

  cout << "\n";

  string star = "* * * * * * * *\n";
  string space = " * * * * * * * *\n";
  cout << star << space << star << space << star << space << star << space;

  return 0;
}
