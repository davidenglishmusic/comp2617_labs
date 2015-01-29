#include <string>

class Employee
{
public:
    explicit Employee(std::string, std::string, int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMonthlySalary(int);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonthlySalary() const;
private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;
};
