/*
Вычислить значение выражения по формуле (все переменные принимают действительные значения): (1-tg x)^(ctg x)+ cos(x-y).
*/

#include <iostream>
#include <math.h>
#include <iomanip>

int main(int argc, char* argv[])
{
    const double pi = 3.141592;
    double x, y;
    setlocale(LC_ALL, "rus");
    std::cout << "Введите значение х: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;
    // преобразуем введённые значения в радианы
    x = x * pi / 180; // теперь x задан в радианах
    y = y * pi / 180; // теперь y задан в радианах
    std::cout << "Ответ = " << fixed/*для управления ввода чисел с плавающей запятой*/ << setprecision(2)/*вывод чисел с плавающей запятой*/ << pow(1 - tan(x), (cos(x) / sin(x))/*котангенс*/) + cos(x - y) << std::endl;
    system("pause");
    return 0;
}