
#include <iostream>
#include <string>
#include <vector>
#include "AcademicCompass.h" // Assuming this header exists in the same directory or include path
using namespace std;

// Function declarations (assuming these are defined in AcademicCompass.h or elsewhere)
void drawCompass(vector < string >& canvas, int x, int y);
void drawText(vector< string>& canvas, int x, int y, const string& text);

// Function declaration for average grade calculation (definition should be in a separate .cpp file if complex)
void calculateAverageGrade();

int main() {
    // Размери на canva (Canvas dimensions)
    int width = 40;
    int height = 20;
    int choice;

    // създаване на canvas (2D vector of characters) (Creating the canvas)
    vector < string> canvas(height, string(width, ' '));

    // Поставяне на компаса в средата (Placing the compass in the center)
    drawCompass(canvas, width / 2, height / 2 - 2);

    // Поставяне на текст "Academic Compass" (Placing the text "Academic Compass")
    string text = "Academic Compass";
    int textX = (width - text.length()) / 2; // Центриране на текста (Centering the text)
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
        cout << "Enter your choice (1-4) : ";
        cin >> choice;

        if (choice == 1) {
            cout << "Running Average grade calculator....." << endl;
            void calculateAverageGrade();
            
        } else if (choice == 2) {
            cout << "Running Program 2..." << endl;
            
            // Add code to run Program 2 here
        } else if (choice == 3) {
            cout << "Running Program 3..." << endl;
            // Add code to run Program 3 here
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break; // Exit the while loop
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }
}
