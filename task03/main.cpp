/* 
Организовать ввод двухзначного натурального числа с клавиатуры.
Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.
*/

#include <iostream>
#include <algorithm> // Для функций min и max

int main() {
    int number;

    // Ввод числа
    std::cout << "Введите число не большее 99: ";
    std::cin >> number;

    // Проверка на диапазон
    if (number < 10 || number > 99) {
        std::cout << "Ошибка: введите двухзначное натуральное число." << std::endl;
        return 1; // Завершение программы с ошибкой
    }

    // Извлечение цифр
    int tens = number / 10; // Десятки
    int units = number % 10; // Единицы

    // Определение наибольшей и наименьшей цифры с использованием min и max
    int maxDigit = max(tens, units);
    int minDigit = min(tens, units);

    // Вывод результата
    std::cout << maxDigit << " - большая цифра" << std::endl;
    std::cout << minDigit << " - меньшая цифра" << std::endl;

    return 0;
}