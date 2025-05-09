//Program to find the pascle triangle using array
// right angle triagle


#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Enter the number of rows : ";
    cin >> numRows;

    int arr[numRows][numRows];

    for(int i=0;i<=numRows;i++)
    {
        for (int j = 0;j<=i; j++)
        {
            if(i==j||j==0)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
               
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
        
    }

    return 0;
}