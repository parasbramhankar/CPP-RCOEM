#include <iostream>

using namespace std;

int main() {
    int age;
    char gender;
    char maritalStatus;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter marital status (M/S): ";
    cin >> maritalStatus;

    bool insured = false;

    if (maritalStatus == 'M') {
        insured = true;
    } else {
        if (gender == 'M' && age >= 30) {
            insured = true;
        } else if (gender == 'F' && age >= 25) {
            insured = true;
        }
    }

    if (insured) {
        cout << "Driver is insured." << endl;
    } else {
        cout << "Driver is not insured." << endl;
    }

    return 0;
}
