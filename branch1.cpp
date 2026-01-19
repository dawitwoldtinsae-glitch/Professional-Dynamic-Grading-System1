// Branch 1
#include <iostream>
#include <string>
using namespace std;

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
    while(true) {
        cout << "Enter the student's full name (letters and spaces only): ";
        getline(cin, name);
        if(!isValidName(name))
            cout << "Oops! Name should contain letters and spaces only. Try again.\n";
        else break;
    }
    return name;
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
