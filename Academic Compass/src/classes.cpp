#include "../include/classes.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void classesMenu() {
    system("clear");
    cout << "Menu is opening" << endl;
}

void showMenu() {
    cout << "\n�������� �������:\n";
    cout << "1. ��������\n";
    cout << "2. �����\n";
    cout << "3. ������\n";
    cout << "4. ���������\n";
    cout << "�������� ����� �� �������: ";
}

void biologyExercise() {
    cout << "\n���������� �� ��������:\n";
    cout << "������: ����� � ��������� ������� �� �������������?\n";
    cout << "�) �����������\n�) ������ �� ��������\n�) ������������ �� �������\n�) ���������� �� ����\n";
}

void chemistryExercise() {
    cout << "\n���������� �� �����:\n";
    cout << "������: ����� � ����������� ������ �� ������?\n";
    cout << "�) N\n�) Na\n�) S\n�) K\n";
}

void physicsExercise() {
    cout << "\n���������� �� ������:\n";
    cout << "������: ����� � ������� ������� �� ����?\n";
    cout << "�) ������\n�) �����\n�) ���\n�) ���\n";
}

void geographyExercise() {
    cout << "\n���������� �� ���������:\n";
    cout << "������: ��� � ���-�������� ������� � �����?\n";
    cout << "�) ������\n�) ����\n�) ��������\n�) ����������\n";
}