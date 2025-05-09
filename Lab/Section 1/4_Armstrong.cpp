#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int num = 1; num <= 10000; num++)
    {
        int num2 = num;  

        int count = 0;
        int temp = num;

        while (temp != 0)
        {
            temp /= 10;
            count++;
        }

        int c = 0;
        temp = num;

        while (temp > 0)
        {
            int digit = temp % 10;
            c += pow(digit, count);
            temp /= 10;
        }

        if (num2 == c)
        {
            cout << c << " ";
        }
    }
    return 0;
}
