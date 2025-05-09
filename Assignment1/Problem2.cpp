#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{

    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i < sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    int anshul = 0;
    int ashish = 0;

    int round = 1;
    int num1, num2;
    while (round <= 11)
    {
        cout << "Input for Round " << round << ":" << endl;
        cout << "It's Anshul turn \nEnter a number: ";
        cin >> num1;
        cout << "It's Ashish turn \nEnter a number: ";
        cin >> num2;

        int sum = num1 + num2;

        if (isPrime(sum))
        {
            cout << "Anshul won\n";
            anshul++;
        }
        else if (sum % 4 == 0)
        {
            cout << "Ashish won\n" ;
            ashish++;
        }
        else{
            cout<<"Round "<<round<<" Tied"<<endl;
        }
        cout << endl;
        round++;
    }

    cout << "Game Over \n";
    cout << "Anshul's Score : " << anshul << endl;
    cout << "Ashish's score : " << ashish << endl;

    if (anshul > ashish)
    {
        cout << "Woo hoo...!! Anshul win this Game!!";
    }
    else if (anshul < ashish)
    {
        cout << "Woo hoo...!! Ashish win this Game!!";
    }
    else
    {
        cout << "Oh ho...!! Match Tied!! ";
    }

    return 0;
}