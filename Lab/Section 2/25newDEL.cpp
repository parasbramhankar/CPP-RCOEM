#include <iostream>
using namespace std;
int main()
{
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    int *marks = new int[numSubjects];
    for (int i = 0; i < numSubjects; ++i)
    {
        cout << "Enter marks for Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
    int totalMarks = 0;
    for (int i = 0; i < numSubjects; ++i)
    {
        totalMarks += *(marks+i);
    }
    cout << "Total Marks: " << totalMarks << endl;
    delete[] marks;
    return 0;
}
