#include "../include/calculateAverageGrade.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
using namespace std;
void calculateAverageGrade() {
    system("cls");
    cout << "Menu is opening" << endl;
    double sum = 0.0;
    int count = 0;
    double gradeInput;

    cout << "Enter grades (2-6) one by one, followed by Enter. Enter a non-numeric value to finish:" << endl;

    while (cin >> gradeInput) {
        if (gradeInput >= 2.0 && gradeInput <= 6.0) {
            sum += gradeInput;
            count++;
        }
        else {
            cout << "Invalid grade. Please enter a grade between 2 and 6." << endl;
        }
    }

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (count == 0) {
        cout << "No valid grades entered, cannot calculate average." << endl;
        return;
    }

    double average = sum / count;

    cout << "The average grade is: " << average << endl;
}
