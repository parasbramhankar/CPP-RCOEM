// program to print implicit pascle without using array
// equilateral triangle

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        int c = 1;
        for (int j = 1; j <= i; j++)
        {

            cout << c<<" ";
            c = c * (i - j) / j;
        }
        cout << endl;
    }
}