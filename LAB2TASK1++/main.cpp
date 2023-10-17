#include <iostream>
#include <cmath>
#include "sphere.h"

using namespace std;
int main() {
    double radius;

    // Запрашиваем у пользователя радиус
    cout << "Введите радиус: ";
    cin >> radius;

    // Вычисляем длину окружности
    double circumference = calculateCircumference(radius);

    // Вычисляем площадь поверхности сферы
    double surfaceArea = 4 * 3.14 * radius * radius;

    // Вычисляем объем шара
    double volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    // Выводим результаты
    cout << "Длина окружности: " << circumference << endl;
    cout << "Площадь круга: " << calculateCircleArea(radius) << endl;
    cout << "Площадь поверхности сферы: " << surfaceArea << endl;
    cout << "Объем шара: " << volume << endl;

    return 0;
}