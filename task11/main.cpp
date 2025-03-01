/*
Запрограммировать генератор псевдослучайных чисел, используя конгруэнтный метод формирования псевдослучайных чисел.
*/

#include <iostream>
#include <vector>
#include <iomanip> // Для std::setprecision

using namespace std;

class LCG {
public:
    LCG(unsigned long seed) : x(seed) {}

    double next() {
        // Константы LCG
        const unsigned long a = 1664525; // Множитель
        const unsigned long c = 1013904223; // Инкремент
        const unsigned long m = 4294967296; // Модуль (2^32)

        // Генерация следующего псевдослучайного числа
        x = (a * x + c) % m;
        return static_cast<double>(x) / m; // Преобразование в [0, 1)
    }

private:
    unsigned long x; // Текущее значение
};

int main() {
    unsigned long seed;
    cout << "Введите начальное значение (семя): ";
    cin >> seed;

    LCG lcg(seed);
    vector<double> random_numbers;

    // Генерация 15 псевдослучайных чисел
    for (int i = 0; i < 15; ++i) {
        random_numbers.push_back(lcg.next());
    }

    // Вывод результатов
    cout << "Сгенерированные псевдослучайные числа: ";
    for (const auto& num : random_numbers) {
        cout << fixed << setprecision(2) << num << " "; // Форматирование вывода
    }
    cout << endl;

    return 0;
}

