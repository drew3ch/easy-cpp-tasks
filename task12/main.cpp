/*
Определить номер четверти плоскости, в которой находится точка с координатами X и Y , причем XY != 0. Координаты вводить с клавиатуры.
*/

#include <iostream>

using namespace std;

int main() {
    double X, Y;

    // Ввод координат
    cout << "Введите координату X: ";
    cin >> X;
    cout << "Введите координату Y: ";
    cin >> Y;

    // Проверка на принадлежность к четверти
    if (X > 0 && Y > 0) {
        cout << "I четверть плоскости" << endl;
    } else if (X < 0 && Y > 0) {
        cout << "II четверть плоскости" << endl;
    } else if (X < 0 && Y < 0) {
        cout << "III четверть плоскости" << endl;
    } else if (X > 0 && Y < 0) {
        cout << "IV четверть плоскости" << endl;
    }

    return 0;
}



