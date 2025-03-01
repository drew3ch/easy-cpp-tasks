/*
Вычислить, не используя функцию pow, значения функции z(x,m) = xm sinm(xm), для значений аргументов:

x от -1.1 до 0.3 с шагом 0.2;
m от 1 до 5 с шагом 1.
*/

#include <iostream>
#include <cmath> // Для функции sin
using namespace std;

// Функция для вычисления x^m без использования pow
double calculatePower(double base, int exponent) {
    double result = 1.0;
    int count = 0;

    // Используем цикл while для возведения в степень
    while (count < exponent) {
        result *= base;
        count++;
    }

    return result;
}

// Функция для вычисления z(x, m)
double z(double x, int m) {
    return calculatePower(x, m) * sin(m * x);
}

int main() {
    // Задаем диапазоны для x и m
    double x_start = -1.1;
    double x_end = 0.3;
    double x_step = 0.2;

    // Итерация по значениям x
    for (double x = x_start; x <= x_end; x += x_step) {
        for (int m = 1; m <= 5; ++m) {
            double result = z(x, m);
            cout << "Значение функции = " << result << " При m = " << m << endl;
        }
        cout << "Вычислено при x = " << x << endl;
    }

    return 0;
}
