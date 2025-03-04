/*
Используя оператор цикла do while, составить программу, которая будет требовать ввод цифр с клавиатуры до тех пор, пока не будет введена цифра 1.
*/

#include <iostream>

int main() {
    char input; // Переменная для хранения введенного символа

    do {
        // Запрашиваем ввод у пользователя
        std::cout << "Введите цифру (введите '1' для выхода): ";
        std::cin >> input; // Считываем один символ

        // Проверяем, является ли введенное значение цифрой
        if (isdigit(input)) {
            std::cout << "Вы ввели: " << input << std::endl; // Выводим введенное значение
        } else {
            std::cout << "Ошибка: введено не число." << std::endl; // Сообщаем об ошибке
        }

    } while (input != '1'); // Продолжаем цикл, пока не введена цифра '1'

    std::cout << "Вы вышли из программы." << std::endl; // Сообщаем о выходе из программы
    return 0; // Завершение программы
}
