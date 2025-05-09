#include <iostream>
#include <cstdlib>
using namespace std;
void generatePascalsTriangle(int numRows)
{
    int **triangle = (int **)calloc(numRows, sizeof(int *));
    for (int i = 0; i < numRows; ++i)
    {
        triangle[i] = (int *)calloc(i + 1, sizeof(int));
        for (int j = 0; j <= i; ++j)
        {
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
        triangle[i + 1] = (int *)realloc(triangle[i + 1], (i + 2) * sizeof(int));
    }
    for (int i = 0; i < numRows; ++i)
    {
        free(triangle[i]);
    }
    free(triangle);
}

int main()
{
    int numRows;
    cout << "Enter the number of rows for Pascal's Right-Angled Triangle: ";
    cin >> numRows;
    if (numRows <= 0)
    {
        cout << "Please enter a positive integer for the number of rows." << endl;
        return 1;
    }
    generatePascalsTriangle(numRows);
    return 0;
}
