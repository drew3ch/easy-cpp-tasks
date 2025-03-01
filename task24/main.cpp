/*
Вычислить сумму 1/sin1+1/(sin1+sin2)+…1/(sin1+…+sinn), где n — заданное натуральное число.
*/

#include <iostream>
#include <cmath> // Для использования функции sin
using namespace std;

// Функция для вычисления суммы
double calculateSum(int n) {
    double sum = 0.0; // Переменная для хранения суммы
    double cumulativeSin = 0.0; // Переменная для накопления синусов

    for (int i = 1; i <= n; ++i) {
        cumulativeSin += sin(i); // Накопление синуса
        sum += 1.0 / cumulativeSin; // Добавление 1/(сумма синусов)
    }

    return sum; // Возвращаем итоговую сумму
}

int main() {
    int n;

    // Ввод натурального числа n
    cout << "Введите n: ";
    cin >> n;

    // Проверка на положительное значение n
    if (n <= 0) {
        cout << "n должно быть натуральным числом!" << endl;
        return 1; // Завершение программы с ошибкой
    }

    // Вычисление суммы
    double result = calculateSum(n);

    // Вывод результата
    cout << "Сумма = " << result << endl;

    return 0; // Завершение программы
}

