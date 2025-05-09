#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{
    int matrices[3][SIZE][SIZE];
    for (int k = 0; k < 3; ++k)
    {
        cout << "Enter elements for Matrix " << k + 1 << ":\n";
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                cin >> matrices[k][i][j];
            }
        }
    }
    cout << "\nMatrices entered:\n";
    for (int k = 0; k < 3; ++k)
    {
        cout << "Matrix " << k + 1 << ":\n";
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                cout << matrices[k][i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    int sumDiagonal = 0;
    for (int k = 0; k < 3; ++k)
    {
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                if (i == j)
                {
                    sumDiagonal += matrices[k][i][j];
                }
            }
        }
    }
    cout << "\nSum of diagonal elements across three matrices: " << sumDiagonal << endl;
    return 0;
}
