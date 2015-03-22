#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char phoneNumber[15];

  cout << "Enter a phone number in the form (555) 555-5555:" << endl;

  cin.getline (phoneNumber,15);

  cout << phoneNumber << endl;

  const char * tokens = "() -";

  char areaCode[4];
  char exchange[4];
  char subscriberNumber[5];

  strcpy(areaCode, strtok(phoneNumber, tokens));
  strcpy(exchange, strtok(NULL, tokens));
  strcpy(subscriberNumber, strtok(NULL, tokens));

  cout << "The area code is " << areaCode << endl;
  cout << "The phone number is " << exchange << subscriberNumber << endl; // Corrects extra space in example

  return 0;
}
