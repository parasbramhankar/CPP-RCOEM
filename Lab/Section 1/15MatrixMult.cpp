#include <iostream>
using namespace std;
int main()
{
    int r2, c2, r1, c1;
    cout << "Enter the number of rows and column for Matrix 1 : ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and column for Matrix 2 : ";
    cin >> r2 >> c2;

    if (r2 != c1)
    {
        cout << "Matrix multiplication is not possible " << endl;
        exit(0);
    }
    int a[r1][c1], b[r2][c2];
    cout << "Enter the element of Matrix 1 : " << endl;
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the element of Matrix 2 : " << endl;
    for (int i = 1; i <= r2; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Matrix 1 : " << endl;
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Matrix 2 : " << endl;
    for (int i = 1; i <= r2; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Multiplication of Matrix : " << endl;
    int c[r1][c2];
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            c[i][j] = 0;
            for (int k = 1; k <= c1; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}