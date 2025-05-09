#include <iostream>
using namespace std;
long long tailFactorial(int n, long long result = 1);
int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        long long factorial = tailFactorial(num);
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
long long tailFactorial(int n, long long result) {
    if (n == 0 || n == 1) {
        return result;
    }
    return tailFactorial(n - 1, n * result);
}
