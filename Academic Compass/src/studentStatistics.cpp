#include "../include/studentStatistics.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void studentStatistics() {
    system("clear");
    cout << "Menu is opening" << endl;


    void inputStudents(Student students[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << "Въведете име на ученик №" << i + 1 << ": ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Въведете оценка на " << students[i].name << ": ";
            cin >> students[i].grade;
        }
    }

    void sortStudents(Student students[], int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (students[i].grade < students[j].grade) {
                    swap(students[i], students[j]);
                }
            }
        }
    }

    void printStudents(const Student students[], int size) {
        cout << "\nСортиран списък на учениците (по оценки):\n";
        for (int i = 0; i < size; ++i) {
            cout << i + 1 << ". " << students[i].name << " - " << students[i].grade << endl;
        }
    }
}