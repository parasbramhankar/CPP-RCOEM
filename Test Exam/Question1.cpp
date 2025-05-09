#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter Number of Rows: ";
    cin>>row;

    for(int i=1;i<=row;i++){
        char ch='A';

      for(char ch='A';ch<='A'+(2*(i)-2);ch++){
        cout<<ch<<" ";
      }
        
        cout<<endl;
    }

    return 0;
}