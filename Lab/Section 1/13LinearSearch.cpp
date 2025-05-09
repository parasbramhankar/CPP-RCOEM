#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of elements : ";
    cin>>num;
    int a[num];
    cout<<"Enter the elements of Array: ";
    for(int i=0;i<num;i++)
      cin>>a[i];
    cout<<"Enter the element or number you need to find : ";
    int k;
    cin>>k;
    for(int i=0;i<num;i++)
    if(a[i]==k)
        cout<<k<<" is at position "<<i+1;
        exit (0);
    cout<<"Element not found ! ! !";
    return 0;
}