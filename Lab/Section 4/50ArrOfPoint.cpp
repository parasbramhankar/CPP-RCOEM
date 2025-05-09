#include <iostream>
#include <string>
using namespace std;
int main() {
    const int arraySize = 3;
    string* names[arraySize];
    for (int i = 0; i < arraySize; ++i) {
        names[i] = new string;
    }
    for (int i = 0; i < arraySize; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        cin >> *names[i];
    }
    cout << "\nNames entered:\n";
    for (int i = 0; i < arraySize; ++i) {
        cout << "Name " << i + 1 << ": " << *names[i] << "\n";
    }
    for (int i = 0; i < arraySize; ++i) {
        delete names[i];
    }
    return 0;
}
