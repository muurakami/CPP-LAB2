#include <iostream>
#include "timeManip.h"

using namespace std;

int main() {
    int choice;

    // Выводим меню выбора действия
    cout << "Выберите действие:" << endl;
    cout << "1. Годы в дни" << endl;
    cout << "2. Дни в часы" << endl;
    cout << "3. Дни в минуты" << endl;
    cout << "4. Часы в минуты" << endl;
    cout << "5. Часы в секунды" << endl;
    cout << "6. Минуты в секунды" << endl;
    cout << "7. Годы в часы" << endl;
    cout << "Введите номер действия: ";
    cin >> choice;

    // Выбираем действие в зависимости от выбора пользователя
    switch (choice) {
    case 1:
        convertYearsToDays();
        break;
    case 2:
        convertDaysToHours();
        break;
    case 3:
        convertDaysToMinutes();
        break;
    case 4:
        convertHoursToMinutes();
        break;
    case 5:
        convertHoursToSeconds();
        break;
    case 6:
        convertMinutesToSeconds();
        break;
    case 7:
        convertYearsToHours();
        break;
    default:
        cout << "Ошибка: Неверный номер действия." << endl;
        break;
    }

    return 0;
}
