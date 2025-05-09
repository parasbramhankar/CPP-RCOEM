#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number of ele: ";
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // avg
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    float avg;
    avg=sum/n;

    cout<<"Average: "<<avg;

    return 0;
}