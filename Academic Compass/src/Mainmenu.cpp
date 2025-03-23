#include "../include/draw.h"
#include "../include/calculateAverageGrade.h"
#include "../include/studentStatistics.h"
#include "../include/classes.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int width = 40;
    int height = 20;
    int choice;
    vector<string> canvas(height, string(width, ' '));
    drawCompass(canvas, width / 2, height / 2 - 2);
    string text = "Academic Compass";
    int textX = (width - text.length()) / 2;
    int textY = height / 2 + 3;
    drawText(canvas, textX, textY, text);
    for (const auto& row : canvas) {
        cout << row << endl;
    }
    while (true) {
        cout << "1. Average grade calculator" << endl;
        cout << "2. Student Statistics" << endl;
        cout << "3. Classes" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        if (choice == 1) {
            calculateAverageGrade();
        } else if (choice == 2) {
            studentStatistics();
        } else if (choice == 3) {
            classesMenu();
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }
}