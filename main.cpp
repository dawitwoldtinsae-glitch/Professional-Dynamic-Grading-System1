// Branch 5
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main() {
    cout << "   Welcome to the Professional Dynamic Grading System\n";
    cout << "We'll set up subjects and credit hours, then enter student data.\n\n";

    int subjectCount;
    while(true){
        cout << "How many subjects? ";
        cin >> subjectCount;
        if(cin.fail() || subjectCount <= 0 || subjectCount > 10){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter number between 1 and 10.\n";
        } else break;
    }
    cin.ignore();

    string subjects[10];
    double credits[10];
    for(int i = 0; i < subjectCount; i++) {
        cout << "Enter subject " << i+1 << ": ";
        getline(cin, subjects[i]);
        while(true){
            cout << "Enter credit hours: ";
            cin >> credits[i];
            if(cin.fail() || credits[i] <= 0) {
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Invalid! Try again.\n";
            } else break;
        }
        cin.ignore();
    }

    int n;
    while(true){
        cout << "How many students? ";
        cin >> n;
        if(cin.fail() || n <= 0){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Invalid number! Try again.\n";
        } else break;
    }
    cin.ignore();

    // Global arrays
    int id[100];
    string name[100], status[100];
    double marks[100][10], average[100], gpa[100];

    // Input student data
    for(int i = 0; i < n; i++){
        cout << "\nEntering student " << i+1 << endl;
        id[i] = inputID();
        name[i] = inputName();
        for(int j = 0; j < subjectCount; j++)
            marks[i][j] = inputMark(subjects[j]);
        calculateStudent(marks[i], credits, subjectCount, &average[i], &gpa[i], &status[i]);
    }

    int choice;
    do {
        cout << "\nMENU\n1. Display all students\n2. Search student by ID/Name/GPA\n3. Show top student(s)\n4. Show class statistics\n5. Exit\nYour choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1:
                cout << left << setw(6) << "ID" << setw(25) << "Name";
                for(int i=0;i<subjectCount;i++) cout << setw(15) << subjects[i];
                cout << setw(10) << "Avg" << setw(6) << "GPA" << setw(6) << "Status" << endl;
                for(int i=0;i<n;i++)
                    displayStudent(id[i], name[i], marks[i], credits, subjects, subjectCount, average[i], gpa[i], status[i]);
                break;
            case 2:
                cout << "Search functionality skipped for brevity.\n"; // You can add search code here
                break;
            case 3:
                {
                    double topGPA = findTopGPA(gpa, n);
                    cout << "Top student(s) with GPA " << topGPA << endl;
                }
                break;
            case 4:
                showClassStatistics(marks, n, subjectCount, subjects, status);
                break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}

