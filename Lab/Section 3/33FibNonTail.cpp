#include <iostream>
using namespace std;
long long nonTailFibonacci(int n);

int main() {
    int num;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < num; ++i) {
            cout << nonTailFibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}

long long nonTailFibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        long long a = 0, b = 1, result;
        for (int i = 2; i <= n; ++i) {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }
}
