//Branch 4
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void showClassStatistics(double marks[][10], int n, int subjectCount, string *subjects, string *status) {
    double sum[10] = {0};
    int passCount = 0, failCount = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < subjectCount; j++) sum[j] += marks[i][j];
        if(status[i] == "Pass") passCount++; else failCount++;
    }
    cout << fixed << setprecision(2);
    cout << "Class averages per subject:\n";
    for(int j = 0; j < subjectCount; j++)
        cout << subjects[j] << ": " << sum[j]/n << "  ";
    cout << "\nTotal Passed: " << passCount << "  Total Failed: " << failCount << endl;
}

double findTopGPA(double gpa[], int n){
    double topGPA = -1;
    for(int i = 0; i < n; i++) if(gpa[i] > topGPA) topGPA = gpa[i];
    return topGPA;
}

