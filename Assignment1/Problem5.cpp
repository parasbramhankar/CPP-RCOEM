#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int riders;
    cout << "How many Riders are there ? ";
    cin >> riders;

    double CF = 47;
    double r = 5;
    double m = 50;
    double total_mass=m*riders;

    double angle = 12.13;
    double v = sqrt((CF * r)/total_mass);

    double a_velocity=v*cos(angle);

    cout<<"Maximum velocity at 12.13 degree angle : "<<a_velocity<<" m/s";

    return 0;
}