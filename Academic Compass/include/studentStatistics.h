#ifndef STUDENTSTATISTICS_H
#define STUDENTSTATISTICS_H
#include <string>
using namespace std;
void studentStatistics();



struct Student {
    string name;
    double grade;
};

void inputStudents(Student students[], int size);
void sortStudents(Student students[], int size);
void printStudents(const Student students[], int size);

#endif