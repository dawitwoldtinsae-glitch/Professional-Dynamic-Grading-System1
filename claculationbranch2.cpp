#include <string>
using namespace std;

void calculateStudent(
    double *marks,
    double *credits,
    int subjectCount,
    double *average,
    double *gpa,
    string *status
) {
    double totalWeightedMarks = 0.0;
    double totalCredits = 0.0;

    for (int i = 0; i < subjectCount; i++) {
        totalWeightedMarks += marks[i] * credits[i];
        totalCredits += credits[i];
    }

    *average = totalWeightedMarks / totalCredits;

    if (*average >= 90)       *gpa = 4.0;
    else if (*average >= 85)  *gpa = 3.75;
    else if (*average >= 80)  *gpa = 3.50;
    else if (*average >= 75)  *gpa = 3.25;
    else if (*average >= 70)  *gpa = 3.00;
    else if (*average >= 65)  *gpa = 2.75;
    else if (*average >= 60)  *gpa = 2.50;
    else if (*average >= 50)  *gpa = 2.00;
    else                      *gpa = 0.00;

    *status = (*average >= 50) ? "Pass" : "Fail";
}
