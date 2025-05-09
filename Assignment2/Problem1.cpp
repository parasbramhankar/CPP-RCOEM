#include <iostream>

using namespace std;

int main() {
    bool attendance[50] = {true}; // initialize all elements to false

    // set attendance status for girls
    for (int i = 1; i <= 22; i++) {
        attendance[i] = true;
    }

    // set attendance status for boys
    for (int i = 23; i <= 50; i++) {
        attendance[i] = true;
    }

    // set attendance status for absent students
    cout<<"Enter number of student absent: ";
    int n;
    cin>>n;
    cout<<"Enter Roll Number: ";
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        attendance[num] = false;
    }

    cout<<"Number of Student attending placement drive : ";
    cin>>n;
    cout<<"Student attending placement drive :";
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        attendance[num]=true;
    }

    cout<<"Number of the student attending student forum meetings: ";
    cin>>n;
    cout<<"student attending student forum meetings: ";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        attendance[num]=true;
    }

//calculation

    int tStudents = 50;
    int pStudents = 0;

    for (int i = 1; i <= tStudents; i++) {
        if (attendance[i]) {
            pStudents++;
        }
    }

    double aPercentage = (double) pStudents / tStudents * 100;

    cout << "Attendance Percentage: " << aPercentage << "%" << endl;

    int totalGirls = 22;
    int totalBoys = 28;
    int presentGirls = 0;
    int presentBoys = 0;

    for (int i = 1; i <= totalGirls; i++) {
        if (attendance[i]) {
            presentGirls++;
        }
    }

    for (int i = totalGirls + 1; i <= tStudents; i++) {
        if (attendance[i]) {
            presentBoys++;
        }
    }

    double gAtPercentage = (double) presentGirls / totalGirls * 100;
    double bAtPercentage = (double) presentBoys / totalBoys * 100;

    cout << "Girls Attendance Percentage: " << gAtPercentage << "%" << endl;
    cout << "Boys Attendance Percentage: " << bAtPercentage << "%" << endl;

    return 0;
}