#include <iostream>
#include <iomanip>
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
double inputMark(string subjectName){
    double mark;
    while(true) {
        cout << "Enter mark for " << subjectName << " (0-100): ";
        cin >> mark;
        if(cin.fail() || mark < 0 || mark > 100) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Oops! That mark is not valid. Please enter a number between 0 and 100.\n";
        } else break;
    }
    return mark;
}
int inputID(){
    int id;
    while(true){
        cout << "Enter student ID (positive number): ";
        cin >> id;
        if(cin.fail() || id <= 0) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Oops! That's not a valid ID. Try again.\n";
        } else break;
    }
    cin.ignore();
    return id;
}
bool isValidName(const string &s){
    for(int i = 0; i < s.length(); i++)
        if(!isalpha(s[i]) && s[i] != ' ')
            return false;
    return !s.empty();
}
string inputName(){
    string name;
    while(true){
        cout << "Enter the student's full name (letters and spaces only): ";
        getline(cin, name);
        if(!isValidName(name))
            cout << "Oops! Name should contain letters and spaces only. Try again.\n";
        else break;
    }
    return name;
}
void displayStudent(int id, string name, double *marks, double *credits, string *subjects, int subjectCount, double avg, double gpa, string status) {
    cout << left << setw(6) << id
         << setw(25) << name;
    for(int i = 0; i < subjectCount; i++)
        cout << setw(15) << marks[i];
    cout << setw(10) << fixed << setprecision(2) << avg
         << setw(6) << gpa
         << setw(6) << status << endl;
}

int main(){
    cout << "   Welcome to the Professional Dynamic Grading System    \n";
    cout << "We'll first set up the subjects and credit hours, then enter student data.\n\n";
    int subjectCount;
    while(true){
        cout << "How many subjects would you like to record? ";
        cin >> subjectCount;
        if(cin.fail() ||subjectCount <= 0 || subjectCount> 10){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter a number between 1 and 10.\n";
        } else break;
    }
    cin.ignore();

    string subjects[10];
    double credits[10];
    for(int i = 0; i < subjectCount; i++) {
        cout << "Enter name of subject " << i+1 << ": ";
        getline(cin, subjects[i]);
        while(true) {
            cout <<"Enter credit hours for " << subjects[i] << " (positive number): ";
            cin >> credits[i];
            if(cin.fail() || credits[i] <= 0) {
                cin.clear();
                cin.ignore(1000,'\n');
                cout <<"Invalid credit hours! Try again.\n";
            } else break;
        }
        cin.ignore();
    }

    cout << "\n    Now we will enter student data   \n\n";

    int n;
    while(true){
        cout <<"How many students do you want to enter? ";
        cin >> n;
        if(cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout <<"Invalid number! Enter a positive integer.\n";
        } else break;
    }
    cin.ignore();

    int id[100];
    string name[100], status[100];
    double marks[100][10];
    double average[100], gpa[100];

    for(int i = 0; i < n; i++) {
        cout <<"\n   Entering details for student " << i+1 <<endl;
        id[i]=inputID();
        name[i]=inputName();
        for(int j=0; j <subjectCount; j++)
            marks[i][j]=inputMark(subjects[j]);
        calculateStudent(marks[i], credits, subjectCount, &average[i], &gpa[i], &status[i]);
    }

    int choice;
    do {
        cout <<"\n  MENU"<<endl;
        cout <<"1. Display all students\n";
        cout <<"2. Search student by ID, Name or GPA\n";
        cout <<"3. Show top student(s)\n";
        cout <<"4. Show class statistics\n";
        cout <<"5. Exit\n";
        cout <<"Your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: {
                cout <<left <<setw(6) <<"ID"<<setw(25)<< "Name";
                for(int i = 0; i<subjectCount; i++)cout <<setw(15)<< subjects[i];
                cout <<setw(10) << "Avg" << setw(6) << "GPA" << setw(6) << "Status" << endl;
                for(int i=0; i<n; i++)
                    displayStudent(id[i], name[i], marks[i], credits, subjects, subjectCount, average[i], gpa[i], status[i]);
                break;
            }

            case 2: {
                int searchOption;
                cout <<"Search by: 1=ID 2=Name 3=GPA: ";
                cin >>searchOption;
                cin.ignore();
                bool found = false;

                if(searchOption==1){
                    int searchID;
                    cout <<"Enter ID to search: ";
                    cin >>searchID;
                    cin.ignore();

                    cout << left <<setw(6)<<"ID"<<setw(25)<<"Name";
                    for(int i=0; i<subjectCount; i++) cout<<setw(15)<< subjects[i];
                    cout <<setw(10)<<"Avg"<<setw(6)<<"GPA"<<setw(6)<<"Status"<< endl;

                    for(int i=0; i<n; i++)
                        if(id[i]==searchID){
                            displayStudent(id[i], name[i], marks[i], credits, subjects, subjectCount, average[i], gpa[i], status[i]);
                            found =true;
                        }
                } else if(searchOption==2){
                    string searchName;
                    cout <<"Enter full or partial name: ";
                    getline(cin, searchName);

                    cout <<left<<setw(6)<<"ID"<<setw(25)<< "Name";
                    for(int i = 0; i<subjectCount; i++) cout << setw(15) << subjects[i];
                    cout << setw(10) << "Avg" << setw(6) << "GPA" << setw(6) << "Status" << endl;

                    for(int i = 0; i < n; i++)
                        if(name[i].find(searchName) != string::npos) {
                            displayStudent(id[i], name[i], marks[i], credits, subjects, subjectCount, average[i], gpa[i], status[i]);
                            found = true;
                        }
                } else if(searchOption == 3) {
                    double searchGPA;
                    cout << "Enter GPA to search: ";
                    cin >> searchGPA;
                    cin.ignore();
                    cout << left << setw(6) << "ID" << setw(25) << "Name";
                    for(int i = 0; i < subjectCount; i++) cout << setw(15) << subjects[i];
                    cout << setw(10) << "Avg" << setw(6) << "GPA" << setw(6) << "Status" << endl;
                    for(int i = 0; i < n; i++)
                        if(gpa[i] == searchGPA) {
                            displayStudent(id[i], name[i], marks[i], credits, subjects, subjectCount, average[i], gpa[i], status[i]);
                            found = true;
                        }
                }
                if(!found) cout << "No student found matching your search.\n";
                break;
            }
            case 3: {
                double topGPA = -1;
                for(int i = 0; i < n; i++) if(gpa[i] > topGPA) topGPA = gpa[i];
                cout << "Top student(s):\n";
                cout << left << setw(6) << "ID" << setw(25) << "Name";
                for(int i = 0; i < subjectCount; i++) cout << setw(15) << subjects[i];
                cout << setw(10) << "Avg" << setw(6) << "GPA" << setw(6) << "Status" << endl;
                for(int i = 0; i < n; i++)
                    if(gpa[i] == topGPA)
                        displayStudent(id[i], name[i], marks[i], credits, subjects, subjectCount, average[i], gpa[i], status[i]);
                break;
            }
            case 4: {
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
                break;
            }
            case 5: cout << "Exiting program. Goodbye!\n"; break;
            default: cout << "Invalid choice! Please enter a number between 1-5.\n";
        }
    } while(choice != 5);
    return 0;
}


