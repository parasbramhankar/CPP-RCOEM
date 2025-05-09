#include<iostream>
using namespace std;

int main(){

    float ltime;
    cout<<"Enter the time taken for a 100 m lap(in sec): ";
    cin>>ltime;

    float t_time=4*ltime;
    
    float r_time=58;

    float d_time=t_time-r_time;
    if(d_time>0){
        cout<<"Dhairya a need to improvement by "<<d_time<<" sec to eligible for the final Competition. "<<endl;
    }
    else{
        cout<<"Dhairya is already eligible for Competition ";
    }
    return 0;
}