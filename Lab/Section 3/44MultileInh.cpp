#include <iostream>
#include <iomanip>
using namespace std;
class Organization {
protected:
    string name;
    string designation;

public:
    void inputDetails() {
        cout << "Enter employee name: ";
        cin>>name;
        cout << "Enter employee designation: ";
        cin>>designation;
    }
};
class Employee : public Organization {
protected:
    double basicSalary;
public:
    void calculateBasicSalary() {
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }
};
class Salary : public Employee {
public:
    void calculateGrossSalary() {
        double grossSalary = basicSalary;
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Gross Salary: " << fixed << setprecision(2) << grossSalary << endl;
        cout << "------------------------\n";
    }
};
int main() {
    const int numEmployees = 5;
    Salary employees[numEmployees];
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].Organization::inputDetails();
        employees[i].Employee::calculateBasicSalary();
    }
    for (int i = 0; i < numEmployees; ++i)
    employees[i].Salary::calculateGrossSalary();
    return 0;
}
