# Professional-Dynamic-Grading-System
Professional Dynamic Grading System
Team Members

Roba Girmaye

Dawit Woldtinsae

Melat Endalamaw

Nebiyu Eyob

Nuhamin Feleke

Project Overview

This project implements a Dynamic Grading System in C++. It allows instructors or administrators to record students’ marks across multiple subjects, calculate their weighted averages, GPA, and academic status (Pass/Fail), and perform advanced queries such as searching students and viewing class statistics. The system is designed to be user-friendly, robust, and flexible, supporting dynamic numbers of subjects and students.

Features

Dynamic Subject Setup: Define any number of subjects (up to 10) and their credit hours.

Student Data Entry: Input student ID, full name, and marks for each subject. Validation ensures correct input.

Weighted GPA Calculation: Computes the weighted average and GPA for each student according to a defined grading scale.

Academic Status: Automatically determines whether a student has passed or failed.

Display Options:

Show all students with detailed marks, averages, GPA, and status.

Search students by ID, Name, or GPA.

Display top-performing student(s).

Show class statistics, including averages per subject and total pass/fail counts.

Usage

Run the program.

Enter the number of subjects (1–10) and their names and credit hours.

Enter the number of students and input each student’s ID, full name, and marks.

Use the menu options to display student records, search, view top students, or see class statistics.

Exit the program when done.

Grading Scale
Average (%)	GPA	Status
90–100	4.0	Pass
85–89	4.0	Pass
80–84	3.75	Pass
75–79	3.5	Pass
70–74	3.0	Pass
65–69	2.75	Pass
60–64	2.5	Pass
50–59	2.0	Pass
45–49	1.75	Pass
40–44	1.0	Pass
<40	0.0	Fail
C++ Concepts Used

Arrays and pointers

Functions with pointer parameters

Input validation and error handling

Loops (for and do-while)

Conditional statements (if-else)

String manipulation and searching

Formatted output using iomanip

System Flow

Program welcomes the user.

User enters subject details (names and credits).

User enters student data (ID, name, and marks).

Calculations for weighted average, GPA, and status.

Menu-driven interface allows viewing all students, searching, showing top students, and class statistics.

Program exits when user selects Exit.

