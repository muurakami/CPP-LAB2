#include <iostream>

using namespace std;

// Прототипы функций
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
double division(double a, double b);

int main() {
    double num1, num2, choice;

    // Запрашиваем у пользователя два целых числа
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Введите второе целое число: ";
    cin >> num2;

    // Выводим меню выбора операции
    cout << "Выберите операцию:" << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Деление" << endl;
    cout << "Введите номер операции: ";
    cin >> choice;

    // Выбираем операцию в зависимости от выбора пользователя
    if (choice == 1) {
        int result = addition(num1, num2);
        cout << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (choice == 2) {
        int result = subtraction(num1, num2);
        cout << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (choice == 3) {
        int result = multiplication(num1, num2);
        cout << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (choice == 4) {
        if (num2 != 0) { // Проверка на деление на ноль
            double result = division(num1, num2);
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
            cout << "Ошибка: Деление на ноль." << endl;
        }
    }
    else {
        cout << "Ошибка: Неверный номер операции." << endl;
    }

    return 0;
}

// Функция для сложения двух чисел
int addition(int a, int b) {
    return a + b;
}

// Функция для вычитания двух чисел
int subtraction(int a, int b) {
    return a - b;
}

// Функция для умножения двух чисел
int multiplication(int a, int b) {
    return a * b;
}
double division(double a, double b) {
    return a / b;
}