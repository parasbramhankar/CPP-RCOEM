#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int srNo;
    std::string name;
    std::string post;
    int salary;
    int overtimeRate;
};

void calculateSalary(Employee emp, int hoursWorked) {
    int regularHours = 180;
    int overtimeHours = hoursWorked - regularHours;

    int regularSalary = emp.salary;
    int overtimePay = 0;

    if (overtimeHours > 0) {
        overtimePay = overtimeHours * emp.overtimeRate;
    }

    int netSalary = regularSalary + overtimePay;

    std::cout << "Salary Slip for " << emp.name << " (Sr. No. " << emp.srNo << "):\n";
    std::cout << "Post: " << emp.post << "\n";
    std::cout << "Regular Salary: Rs. " << regularSalary << "\n";
    std::cout << "Overtime Pay: Rs. " << overtimePay << "\n";
    std::cout << "Net Salary: Rs. " << netSalary << "\n\n";
}

int main() {
    int n;
    cout<<"Enter number of Employee: ";
    cin>>n;
    Employee employees[n];

    std::cout << "Enter details for each employee:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Employee " << i + 1 << ":\n";
        employees[i].srNo = i + 1;

        std::cout << "Name: ";
        std::cin >> employees[i].name;

        std::cout << "Post: ";
        std::cin >> employees[i].post;

        std::cout << "Salary: ";
        std::cin >> employees[i].salary;

        std::cout << "Overtime rate per hour: ";
        std::cin >> employees[i].overtimeRate;
        std::cout << "\n";
    }

    int hoursWorked;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter hours worked by " << employees[i].name << ": ";
        std::cin >> hoursWorked;

        calculateSalary(employees[i], hoursWorked);
    }

    return 0;
}
