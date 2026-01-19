#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayStudent(int id, string name, double *marks, double *credits, string *subjects, int subjectCount, double avg, double gpa, string status) {
    cout << left << setw(6) << id
         << setw(25) << name;
    for(int i = 0; i < subjectCount; i++)
        cout << setw(15) << marks[i];
    cout << setw(10) << fixed << setprecision(2) << avg
         << setw(6) << gpa
         << setw(6) << status << endl;
}
