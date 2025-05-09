#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    int c = 0;
    for (int i = 2; i <n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}