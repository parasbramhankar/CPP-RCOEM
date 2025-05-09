#include <iostream>
using namespace std;
void case0();
void case1();
void case2();
void case3();
int main() {
    void (*jumpTable[])() = {case0, case1, case2, case3};
    int choice;
    cout << "Enter a case number (0-3): ";
    cin >> choice;
    if (choice >= 0 && choice < sizeof(jumpTable) / sizeof(jumpTable[0])) {
        jumpTable[choice]();
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}
void case0() {
    cout << "You selected case 0." << endl;
}
void case1() {
    cout << "You selected case 1." << endl;
}
void case2() {
    cout << "You selected case 2." << endl;
}
void case3() {
    cout << "You selected case 3." << endl;
}
