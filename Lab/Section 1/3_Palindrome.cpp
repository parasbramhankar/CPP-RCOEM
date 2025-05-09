#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int num1=num;
    int c=0;
    while (num>0)
    {
        int b=num%10;
        c=(c*10)+b;
        num/=10;
        
    }
    
    if(c==num1){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not Pallindrome";
    }
    
return 0;
}
