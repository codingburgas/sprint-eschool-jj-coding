#include "../include/studentStatistics.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int grade;
};

void studentStatistics() {
    system("cls");
    cout << "Menu is opening" << endl;
    cout << "Enter the number of students: ";
    int numStudents;
    cin >> numStudents;
    cin.ignore();

    if (numStudents <= 0) {
        cout << "Invalid number of students." << endl;
        return;
    }

    vector<Student> students(numStudents);


    cout << "\n--- Enter Student Information ---" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the name of the student ¹" << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter the grade of " << students[i].name << ": ";
        cin >> students[i].grade;
        cin.ignore();
    }


    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.grade > b.grade;
        });


    cout << "\n--- Student list (by grades) ---" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << i + 1 << ". " << students[i].name << " - " << students[i].grade << endl;
    }

    cout << "\nPress Enter to return to the main menu...";
    cin.get();
}

