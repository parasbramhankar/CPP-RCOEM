#include <iostream>
using namespace std;
int main()
{
    const int numStudents = 10;
    int numSubjects;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    int **marks = new int *[numStudents];

    for (int i = 0; i < numStudents; ++i)
    {
        marks[i] = new int[numSubjects];
    }

    for (int i = 0; i < numStudents; ++i)
    {
        for (int j = 0; j < numSubjects; ++j)
        {
            cout << "Enter marks for Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\nTotal Marks for Each Student:\n";
    for (int i = 0; i < numStudents; ++i)
    {
        int totalMarks = 0;
        for (int j = 0; j < numSubjects; ++j)
        {
            totalMarks += marks[i][j];
        }
        cout << "Student " << i + 1 << ": " << totalMarks << " marks\n";
    }

    for (int i = 0; i < numStudents; ++i)
    {
        delete[] marks[i];
    }
    delete[] marks;

    return 0;
}
