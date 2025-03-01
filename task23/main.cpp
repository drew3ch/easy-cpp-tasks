/*
Разработать функцию, в которую передаются в качестве аргументов массив типа float и его размер. Функция должна возвращать среднее арифметическое элементов массива.
*/

#include <iostream>
using namespace std;

// Функция для вычисления среднего арифметического
float calculateAverage(float* array, int size) {
    float sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i]; // Суммируем элементы массива
    }
    return sum / size; // Возвращаем среднее арифметическое
}

int main() {
    int size;

    // Ввод размера массива
    cout << "Введите размер массива: ";
    cin >> size;

    // Проверка на положительный размер
    if (size <= 0) {
        cout << "Размер массива должен быть положительным!" << endl;
        return 1;
    }

    // Создание массива типа float
    float* array = new float[size];

    // Ввод элементов массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    // Вызов функции для вычисления среднего арифметического
    float average = calculateAverage(array, size);

    // Вывод результата
    cout << "Среднее арифметическое элементов массива: " << average << endl;

    // Освобождение памяти
    delete[] array;

    return 0;
}