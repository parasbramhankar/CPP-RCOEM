// C++ code for Pascal's Triangle

#include <iostream>
using namespace std;

int binomialCoeff(int n, int k);

void printPascal(int n)
{

    for (int line = 0; line <=n; line++)
    {
        for (int space = 1; space <= n - line; space++)
        {
            cout << " ";
        }

        for (int i = 0; i <= line; i++)
        {
            cout << " " << binomialCoeff(line, i);
        }
        cout << "\n";
    }
}

int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int s = 0; s < k; ++s)
    {
        res *= (n - s);
        res /= (s + 1);
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter Number of Rows: ";
    cin>>n;
    printPascal(n);
    return 0;
}
