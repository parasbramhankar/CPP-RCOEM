
#include <iostream>
using namespace std;

int sum(int n){

    int sum=0;
    while (n>0||sum>9)
    {
        if(n==0){
            n=sum;
            sum=0;
        }

        sum+=n%10;
        n/=10;
    }

    return sum;
    

}

int main()
{

    int date;

    cout << "Enter Date of DOB: ";
    cin >> date;

    if(date<=31){
    int choice = sum(date);


    switch (choice)
    {
    case 1:
        cout<<"You are Intelligent ";
        break;
    case 2:
        cout<<"You are Handsome ";
        break;
    case 3:
        cout<<"You are Cool ";
        break;
    case 4:
        cout<<"You are Dangerous ";
        break;
    case 5:
        cout<<"You are Gorgeous ";
        break;
    case 6:
        cout<<"You are Smart ";
        break;
    case 7:
        cout<<"You are Funny ";
        break;
    case 8:
        cout<<"You are Genius ";
        break;
    case 9:
        cout<<"You are Crazy ";
        break;

    
    }
    }
    else{
        cout<<"Invalid Input:";
    }


    return 0;
}

