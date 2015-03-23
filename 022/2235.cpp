#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const unsigned int PHONE_NUMBER_LENGTH = 15;
  const unsigned int AREA_CODE_AND_EXCHANGE_LENGTH = 4;
  const unsigned int SUBCRIBER_NUMBER_LENGTH = 5;


  char phoneNumber[PHONE_NUMBER_LENGTH];

  cout << "Enter a phone number in the form (555) 555-5555:" << endl;

  cin.getline (phoneNumber,PHONE_NUMBER_LENGTH);

  cout << phoneNumber << endl;

  const char * delimiters = "() -";

  char areaCode[AREA_CODE_AND_EXCHANGE_LENGTH];
  char exchange[AREA_CODE_AND_EXCHANGE_LENGTH];
  char subscriberNumber[SUBCRIBER_NUMBER_LENGTH];

  strcpy(areaCode, strtok(phoneNumber, delimiters));
  strcpy(exchange, strtok(NULL, delimiters));
  strcpy(subscriberNumber, strtok(NULL, delimiters));

  cout << "The area code is " << areaCode << endl;
  cout << "The phone number is " << exchange << subscriberNumber << endl; // Corrects extra space in example

  return 0;
}
