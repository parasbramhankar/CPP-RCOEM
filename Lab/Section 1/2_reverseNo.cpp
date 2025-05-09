#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int c=0;
    while (num>0)
    {
        int b=num%10;
        c=(c*10)+b;
        num/=10;
        
    }
    cout<<"Reverse of Given number: "<<c;
    
return 0;
}
