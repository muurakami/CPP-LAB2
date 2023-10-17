#include <iostream>

using namespace std;

// Прототип функции для вычисления факториала
unsigned int calculateFactorial(unsigned int n);

int main() {
    unsigned int number;

    // Запрашиваем у пользователя целое положительное число
    cout << "Введите целое положительное число (не более 12): ";
    cin >> number;

    // Проверяем, что введенное число положительно и не превышает 12
    if (number <= 0 || number > 12) {
        cout << "Ошибка: Введите положительное число, не превышающее 12." << endl;
        return 1; // Выход из программы с ошибкой
    }

    // Вычисляем и выводим факториал
    unsigned int result = calculateFactorial(number);
    cout << "Факториал " << number << " равен " << result << endl;

    return 0;
}

// Рекурсивная функция для вычисления факториала
unsigned int calculateFactorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1; // Факториал 0 и 1 равен 1
    }
    else {
        return n * calculateFactorial(n - 1);
    }
}
