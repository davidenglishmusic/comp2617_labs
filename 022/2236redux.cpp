// Exercise 22.36 Solution: Ex22_36.cpp

#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <cstring> 
using namespace std;

void reverseTokens( char [] ); // prototype
int parseTokens(char[], char *[]); // prototype
void printTokens(char *[], const int); // prototype

const char *DELIMITERS = ";.!,? ";


int main()
{
   const int SIZE = 80;
   char text[ SIZE ];  // buffer where input line of text will be stored
   
   cout << "Enter a line of text:\n";
   cin.getline( text, SIZE );  // >> operator will not work here since it will read only one word
   
   const char *delimiters = ";.!,? ";

   char *pointers[20];

   int numberOfTokens = parseTokens(text, pointers);

   printTokens(pointers, numberOfTokens);

   cout << '\n' << endl;

   system("pause");

   return 0; // indicate successful termination
} // end main


int parseTokens(char sentence[], char * pointers[])
{
	int count = 0;
	char *temp;

	temp = strtok(sentence, DELIMITERS); // specify 6 characters that separate words

	// while temp is not NULL (equivalent to a byte of all zeros which is equiv. to false)
	while (temp)
	{
		// add the word into the array of token pointers
		pointers[count++] = temp;

		// get each subsequent pointer to each word from the sentence
		temp = strtok(0, DELIMITERS); // specify 6 characters that separate words

	} // end loop

	return count;
}


void printTokens(char *pointers[], const int numberOfTokens)
{
	for (int count = numberOfTokens - 1; count >= 0; count--){
		cout << pointers[count] << " ";
	}
}
