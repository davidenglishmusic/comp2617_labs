#include <iostream>
using namespace std;

int main()
{
	int accountNumber = 0;
	double beginningBalance = 0;
	double charges = 0;
	double credits = 0;
	double creditLimit = 0;

	cout << "Enter account number (or -1 to quit): ";
	cin >> accountNumber;

	while (accountNumber != -1)
	{
		cout << "Enter beginning balance: ";
		cin >> beginningBalance;

		cout << "Enter total charges: ";
		cin >> charges;

		cout << "Enter total credits: ";
		cin >> credits;

		cout << "Enter credit limit: ";
		cin >> creditLimit;

		cout << "New balance is: " << beginningBalance + charges - credits << endl;

		if (creditLimit < beginningBalance + charges - credits)
		{
			cout << "Account:      " << accountNumber << endl;
			cout << "Credit limit: " << creditLimit << endl;
			cout << "Balance:      " << beginningBalance + charges - credits << endl;
			cout << "Credit limit exceeded." << endl;
		}

		cout << endl;

		cout << "Enter account number (or -1 to quit): ";
		cin >> accountNumber;

	}

	return 0;
}
