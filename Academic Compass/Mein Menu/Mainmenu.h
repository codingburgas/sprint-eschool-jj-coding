#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void drawCompass(vector < string >& canvas, int x, int y) {
    canvas[y][x] = 'O';
    canvas[y - 1][x] = '|';
    canvas[y + 1][x] = '|';
    canvas[y][x - 1] = '-';
    canvas[y][x + 1] = '-';
}

void drawText(vector < string>& canvas, int x, int y, const string& text) {
    for (size_t i = 0; i < text.length(); ++i) {
        canvas[y][x + i] = text[i];
    }
}

void calculateAverageGrade() {
    double sum = 0.0;
    int count = 0;
    double grade;

    cout << "\nEnter grades (enter a non-numeric value to stop):\n";
    while (cin >> grade) {
        sum += grade;
        count++;
    }
    cin.clear(); // Clear error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard remaining input

    if (count > 0) {
        cout << sum / count;
    }
    else {
        cout << "No grades entered." << endl;
        cout << 0.0;
    }
}


// Структура за ученик
struct Student {
    string name;
    double grade;
};

// Функция за сортиране в низходящ ред
bool compareStudents(const Student& a, const Student& b) {
    return a.grade > b.grade;
}
