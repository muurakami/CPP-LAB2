
#include "sphere.h"
#include <cmath>

// Реализация функции для вычисления длины окружности
double calculateCircumference(double radius) {
    return 2 * 3.14 * radius;
}

// Реализация функции для вычисления площади круга
double calculateCircleArea(double radius) {
    return 3.14 * radius * radius;
}

// Реализация функции для вычисления площади поверхности сферы
double calculateSurfaceArea(double radius) {
    return 4 * 3.14 * radius * radius;
}

// Реализация функции для вычисления объема шара
double calculateVolume(double radius) {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
