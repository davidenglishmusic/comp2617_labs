#include <iostream>
#include "employee.h"
using namespace std;

const int SARAH_STARTING_SALARY = 5000;
const int BILL_STARTING_SALARY = 4000;
const double TEN_PERCENT_RAISE = 1.1;

int main()
{
    Employee sarah = Employee("Sarah", "Wilson", SARAH_STARTING_SALARY);
    Employee bill = Employee("Bill", "Carson", BILL_STARTING_SALARY);

    cout << "Sarah earns " << sarah.getMonthlySalary() << " per month and \n";
    cout << "Bill earns " << bill.getMonthlySalary() << " per month." << endl;

    sarah.setMonthlySalary(sarah.getMonthlySalary() * TEN_PERCENT_RAISE);
    bill.setMonthlySalary(bill.getMonthlySalary() * TEN_PERCENT_RAISE);

    cout << "Following a ten percent raise each,\n";
    cout << "Sarah earns " << sarah.getMonthlySalary() << " per month and \n";
    cout << "Bill earns " << bill.getMonthlySalary() << " per month." << endl;

    return 0;
}
