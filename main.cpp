//Branch 2
#include <string>
using namespace std;

void calculateStudent(double *marks, double *credits, int subjectCount, double *average, double *gpa, string *status) {
    double totalMarks = 0, totalCredits = 0;
    for(int i = 0; i < subjectCount; i++) {
        totalMarks += marks[i] * credits[i];
        totalCredits += credits[i];
    }
    *average = totalMarks / totalCredits;
    if(*average >= 90) *gpa = 4.0;
    else if(*average >= 85) *gpa = 4.0;
    else if(*average >= 80) *gpa = 3.75;
    else if(*average >= 75) *gpa = 3.5;
    else if(*average >= 70) *gpa = 3.0;
    else if(*average >= 65) *gpa = 2.75;
    else if(*average >= 60) *gpa = 2.5;
    else if(*average >= 50) *gpa = 2.0;
    else if(*average >= 45) *gpa = 1.75;
    else if(*average >= 40) *gpa = 1.0;
    else *gpa = 0.0;
    *status = (*average >= 50) ? "Pass" : "Fail";
}

