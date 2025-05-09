#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        int numerator, denominator;
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        double result = static_cast<double>(numerator) / denominator;
        cout << "Result of division: " << result << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
