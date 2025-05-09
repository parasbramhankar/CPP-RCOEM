//Program in cpp to print pascle triangle with using array 
//Equilateral triagle

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

int arr[n][n];
    for(int i=0;i<=n;i++)
    {
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            if(i==j||j==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}