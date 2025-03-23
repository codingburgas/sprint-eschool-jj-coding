#include "../include/classes.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void classesMenu() {
    system("clear");
    cout << "Menu is opening" << endl;
}

void showMenu() {
    cout << "\nИзберете предмет:\n";
    cout << "1. Биология\n";
    cout << "2. Химия\n";
    cout << "3. Физика\n";
    cout << "4. География\n";
    cout << "Въведете номер на предмет: ";
}

void biologyExercise() {
    cout << "\nУпражнение по Биология:\n";
    cout << "Въпрос: Каква е основната функция на митохондриите?\n";
    cout << "а) Фотосинтеза\nб) Синтез на протеини\nв) Производство на енергия\nг) Съхранение на вода\n";
}

void chemistryExercise() {
    cout << "\nУпражнение по Химия:\n";
    cout << "Въпрос: Какъв е химическият символ на натрия?\n";
    cout << "а) N\nб) Na\nв) S\nг) K\n";
}

void physicsExercise() {
    cout << "\nУпражнение по Физика:\n";
    cout << "Въпрос: Какво е мерната единица за сила?\n";
    cout << "а) Паскал\nб) Нютон\nв) Ват\nг) Жул\n";
}

void geographyExercise() {
    cout << "\nУпражнение по География:\n";
    cout << "Въпрос: Коя е най-голямата пустиня в света?\n";
    cout << "а) Сахара\nб) Гоби\nв) Калахари\nг) Антарктида\n";
}