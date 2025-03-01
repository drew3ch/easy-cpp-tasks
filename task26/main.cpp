/*
Программа должна выводить таблицу квадратов чисел от 1 до 5 (необходимо использовать табуляцию и перенос на новую строку, см. управляющие символы). В первом столбце должны находиться числа от 1 до 5 во втором столбце — квадраты этих чисел.
*/

#include <iostream>
#include <iomanip> // Для использования std::setw
using namespace std;

int main() {
    // Заголовок таблицы
    cout << "Число\tКвадрат" << endl; // Вывод заголовка с табуляцией

    // Цикл for для вычисления квадратов
    for (int i = 1; i <= 5; ++i) {
        int square = i * i; // Вычисление квадрата числа
        cout << i << "\t" << square << endl; // Вывод числа и его квадрата с табуляцией
    }

    return 0; // Завершение программы
}
