#include <iostream>
#include "timeManip.h"

using namespace std;

void convertYearsToDays() {
    int years;
    cout << "Введите количество лет: ";
    cin >> years;
    int days = years * 365;
    cout << years << " лет составляют " << days << " дней." << endl;
}

void convertDaysToHours() {
    int days;
    cout << "Введите количество дней: ";
    cin >> days;
    int hours = days * 24;
    cout << days << " дней составляют " << hours << " часов." << endl;
}

void convertDaysToMinutes() {
    int days;
    cout << "Введите количество дней: ";
    cin >> days;
    int minutes = days * 24 * 60;
    cout << days << " дней составляют " << minutes << " минут." << endl;
}

void convertHoursToMinutes() {
    int hours;
    cout << "Введите количество часов: ";
    cin >> hours;
    int minutes = hours * 60;
    cout << hours << " часов составляют " << minutes << " минут." << endl;
}

void convertHoursToSeconds() {
    int hours;
    cout << "Введите количество часов: ";
    cin >> hours;
    int seconds = hours * 60 * 60;
    cout << hours << " часов составляют " << seconds << " секунд." << endl;
}

void convertMinutesToSeconds() {
    int minutes;
    cout << "Введите количество минут: ";
    cin >> minutes;
    int seconds = minutes * 60;
    cout << minutes << " минут составляют " << seconds << " секунд." << endl;
}

void convertYearsToHours() {
    int years;
    cout << "Введите количество лет: ";
    cin >> years;
    int days = years * 365; // Количество дней в указанных годах
    int hours = days * 24; // Переводим дни в часы
    cout << years << " лет составляют " << hours << " часов." << endl;
}
