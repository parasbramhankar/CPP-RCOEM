#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of halts: ";
    cin>>n;

    int dist[n];

    int  sum;
    dist[0]=5,dist[1]=8;

    for(int i=2;i<n;i++){
        dist[i]=dist[i-1]+dist[i-2];
    }

    cout<<"Distance of Each halts: ";

    for(int i=0;i<n;i++){
        cout<<"Halt H"<<i+1<<" : "<<dist[i]<<" km"<<"\n";
    }
    
    return 0;

}