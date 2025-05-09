#include <iostream>
using namespace std;
long long tailFibonacci(int n, long long a = 0, long long b = 1);
int main() {
    int num;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;
    if (num <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < num; ++i) {
            cout << tailFibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}

long long tailFibonacci(int n, long long a, long long b) {
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else {
        return tailFibonacci(n - 1, b, a + b);
    }
}
