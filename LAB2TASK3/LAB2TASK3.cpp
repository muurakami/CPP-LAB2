#include <iostream>
#include <cmath>

using namespace std;

// Прототипы функций
double calculateDiscriminant(double a, double b, double c);
void solveQuadraticEquation(double a, double b, double c);

int main() {
    double a, b, c;

    // Запрашиваем у пользователя коэффициенты
    cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
    cin >> a >> b >> c;

    // Проверяем, является ли уравнение квадратным (a != 0)
    if (a == 0) {
        cout << "Уравнение не является квадратным (a = 0)." << endl;
    }
    else {
        // Выводим уравнение на экран
        cout << "Уравнение: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

        // Решаем уравнение и выводим корни
        solveQuadraticEquation(a, b, c);
    }

    return 0;
}

// Функция для вычисления дискриминанта
double calculateDiscriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

// Функция для решения квадратного уравнения и вывода корней
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = calculateDiscriminant(a, b, c);

    if (discriminant > 0) {
        // Два корня
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Два корня: x1 = " << root1 << ", x2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // Один корень
        double root = -b / (2 * a);
        cout << "Один корень: x = " << root << endl;
    }
    else {
        // Нет корней
        cout << "Нет действительных корней." << endl;
    }
}
