/*
Составить алгоритм определяющий, есть ли среди цифр введенного трехзначного числа — одинаковые. Число вводится с клавиатуры.
*/

#include <iostream>

using namespace std;

int main() {
    int number;

    // Ввод трехзначного числа
    cout << "Введите трехзначное число: ";
    cin >> number;

    // Проверка, что число трехзначное
    if (number < 100 || number > 999) {
        cout << "Ошибка: число должно быть трехзначным." << endl;
        return 1; // Завершение программы с кодом ошибки
    }

    // Отделение цифр
    int first_digit = number / 100;          // Первая цифра
    int second_digit = (number / 10) % 10;   // Вторая цифра
    int third_digit = number % 10;           // Третья цифра

    // Проверка на одинаковые цифры
    if (first_digit == second_digit || first_digit == third_digit || second_digit == third_digit) {
        cout << "Среди цифр введенного трехзначного числа " << number << " есть одинаковые." << endl;
    } else {
        cout << "Среди цифр введенного трехзначного числа " << number << " нет одинаковых." << endl;
    }

    return 0;
}

