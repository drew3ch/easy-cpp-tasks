/*
Вычислить значение выражения по формуле (все переменные принимают действительные значения): (1-tg x)^(ctg x)+ cos(x-y).
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
    const double pi = 3.141592;
    double x, y;
    setlocale(LC_ALL, "rus");
    cout << "Введите значение х: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;
    // преобразуем введённые значения в радианы
    x = x * pi / 180; // теперь x задан в радианах
    y = y * pi / 180; // теперь y задан в радианах
    cout << "Ответ = " << fixed/*для управления ввода чисел с плавающей запятой*/ << setprecision(2)/*вывод чисел с плавающей запятой*/ << pow(1 - tan(x), (cos(x) / sin(x))/*котангенс*/) + cos(x - y) << endl;
    system("pause");
    return 0;
}