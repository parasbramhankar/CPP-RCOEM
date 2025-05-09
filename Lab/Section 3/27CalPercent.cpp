#include <iostream>
using namespace std;
float calculatePercentage(int marks1, int marks2, int marks3, int marks4, int marks5) {
    const int totalSubjects = 5;
    int totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    return static_cast<float>(totalMarks) / totalSubjects;
}
int main() {
    int marks1, marks2, marks3, marks4, marks5;
    cout << "Enter marks for Subject 1: ";
    cin >> marks1;
    cout << "Enter marks for Subject 2: ";
    cin >> marks2;
    cout << "Enter marks for Subject 3: ";
    cin >> marks3;
    cout << "Enter marks for Subject 4: ";
    cin >> marks4;
    cout << "Enter marks for Subject 5: ";
    cin >> marks5;
    float percentage = calculatePercentage(marks1, marks2, marks3, marks4, marks5);
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
