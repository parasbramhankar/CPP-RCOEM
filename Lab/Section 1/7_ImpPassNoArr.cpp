// program for implicite pascle triangle without using array
//Right angle triagle

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter any number: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        int c=1;

        for(int j=1;j<=i;j++){
            cout<<c<<" ";

            c=c*(i-j)/j;
        }
        cout<<endl;
    }

    return 0;
}