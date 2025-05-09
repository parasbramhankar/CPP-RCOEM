#include <iostream>
#include <string>
using namespace std;
struct Address {
    string street;
    string city;
    string state;
    int zipCode;
};
struct DateOfBirth {
    int day;
    int month;
    int year;
};
struct Employee {
    string name;
    int employeeId;
    DateOfBirth birthDate;
    Address homeAddress;
};
int main() {
    Employee employee;
    cout << "Enter employee's name: ";
    cin>>employee.name;
    cout << "Enter employee ID: ";
    cin >> employee.employeeId;
    cout << "Enter birthdate (day month year): ";
    cin >> employee.birthDate.day >> employee.birthDate.month >> employee.birthDate.year;
    cin.ignore();
    cout << "Enter street: ";
    cin>>employee.homeAddress.street;
    cout << "Enter city: ";
    cin>>employee.homeAddress.city;
    cout << "Enter state: ";
    cin>>employee.homeAddress.state;
    cout << "Enter ZIP code: ";
    cin >> employee.homeAddress.zipCode;
    cout << "\nEmployee's Information:\n";
    cout << "Name: " << employee.name << "\n";
    cout << "Employee ID: " << employee.employeeId << "\n";
    cout << "Birthdate: " << employee.birthDate.day << "/" << employee.birthDate.month << "/" << employee.birthDate.year << "\n";
    cout << "Address:\n";
    cout << "  Street: " << employee.homeAddress.street << "\n";
    cout << "  City: " << employee.homeAddress.city << "\n";
    cout << "  State: " << employee.homeAddress.state << "\n";
    cout << "  ZIP Code: " << employee.homeAddress.zipCode << "\n";
    return 0;
}
