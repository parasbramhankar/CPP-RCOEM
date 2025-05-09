#include <iostream>
#include <iomanip>
using namespace std;
class Organization {
protected:
    string name;
    string designation;
    double basicSalary;
    double da;
    double hra;
public:
    void inputDetails() {
        cout << "Enter employee name: ";
        cin>>name;
        cout << "Enter employee designation: ";
        cin>>designation;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        da = 0.1 * basicSalary;
        hra = 0.05 * basicSalary;
    }
};
class CalculateSalary : public Organization {
private:
    double bonus;
public:
    void calculateTotalSalary() {
        if (basicSalary > 25000) {
            bonus = 500;
        } else {
            bonus = 3000;
        }
        double totalSalary = basicSalary + da + hra + bonus;
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << fixed << setprecision(2) << basicSalary << endl;
        cout << "DA: " << fixed << setprecision(2) << da << endl;
        cout << "HRA: " << fixed << setprecision(2) << hra << endl;
        cout << "Bonus: " << fixed << setprecision(2) << bonus << endl;
        cout << "Total Salary: " << fixed << setprecision(2) << totalSalary << endl;
        cout << "------------------------\n";
    }
};
int main() {
    const int numEmployees = 5;
    CalculateSalary employees[numEmployees];
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].Organization::inputDetails();
        employees[i].calculateTotalSalary();
    }
    return 0;
}
