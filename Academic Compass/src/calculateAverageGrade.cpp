#include "../include/calculateAverageGrade.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void calculateAverageGrade() {
    system("clear");
    cout << "Menu is opening" << endl;


    int main() {
        double numbers[] = { 5.0, 10.0, 15.0, 20.0 };
        int size = sizeof(numbers) / sizeof(numbers[0]);

        double avg = calculateAverage(numbers, size);
        cout << "Average grade: " << avg << endl;

        
    }
}
