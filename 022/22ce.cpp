#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	const size_t STRING_SIZE = 64;

	char string1[STRING_SIZE];
	char string2[STRING_SIZE];

	cout << "Input the first string: " << endl;
	cin.getline(string1, STRING_SIZE);
	cout << endl;

	cout << "Input the second string: " << endl;
	cin.getline(string2, STRING_SIZE);
	cout << endl;

	cout << "Compare strings:" << endl;
	cout << "\t\t" << string1 << endl;
	cout << "\t\t" << string2 << endl;
	cout << endl;

	cout << "Result:";

	int answer;

	// The following code would actually enable the shorter of the two strings
	// to set the length of the comparison rather than just first string

	// if(strlen(string1) > strlen(string2)){
	// 	answer = strncmp(string1, string2, strlen(string2));
	// } // then change the condition below to an else if

	if(strlen(string1) < strlen(string2)){
		answer = strncmp(string1, string2, strlen(string1));
	}
	else{
		answer = strcmp(string1, string2);
	}

	cout << "\t\t";

	if (answer > 0 ){
		cout << "String 1 is greater than String 2";
	}
	else if(answer < 0){
		cout << "String 1 is less than String 2";
	}
	else{
		cout << "String 1 is equal to String 2";
	}

	cout << endl;

	return 0;
}
