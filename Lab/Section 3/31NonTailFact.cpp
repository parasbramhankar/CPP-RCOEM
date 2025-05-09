#include <iostream>
using namespace std;
long long nonTailFactorial(int n);
int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        long long factorial = nonTailFactorial(num);
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }
    return 0;
}
long long nonTailFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * nonTailFactorial(n - 1);
}
