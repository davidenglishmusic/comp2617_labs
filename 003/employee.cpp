#include <string>
#include "employee.h"
using namespace std;

Employee::Employee(string firstName, string lastName, int monthlySalary)
{
    setFirstName(firstName);
    setLastName(lastName);
    setMonthlySalary(monthlySalary);
}

void Employee::setFirstName(string name)
{
    firstName = name;
}

void Employee::setLastName(string name)
{
    lastName = name;
}

void Employee::setMonthlySalary(int salary)
{
    if (salary >= 0){
        monthlySalary = salary;
    }
}

string Employee::getFirstName() const
{
    return firstName;
}

string Employee::getLastName() const
{
    return lastName;
}

int Employee::getMonthlySalary() const
{
    return monthlySalary;
}
