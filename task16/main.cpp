/*
Составить программу, которая будет печатать ромб одним из значков (* или + или #) Выбор значков организовать оператором switch.
*/

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int choice;
    char symbol;
    int height, width;

    // Выбор символа
    cout << "Введите 1 для печати ромба '*'\n";
    cout << "Введите 2 для печати ромба '+'\n";
    cout << "Введите 3 для печати ромба '#'\n";
    cout << "Пожалуйста, введите число 1 - 3: ";
    cin >> choice;

    // Определение символа по выбору
    switch (choice) {
    case 1:
        symbol = '*';
        break;
    case 2:
        symbol = '+';
        break;
    case 3:
        symbol = '#';
        break;
    default:
        cout << "Неверный выбор символа." << endl;
        return 1;
    }

    // Ввод высоты и ширины
    cout << "Введите высоту ромба (положительное нечетное число): ";
    cin >> height;
    cout << "Введите ширину ромба (положительное нечетное число): ";
    cin >> width;

    // Проверка на положительность и нечетность
    if (height <= 0 || width <= 0 || height % 2 == 0 || width % 2 == 0) {
        cout << "Высота и ширина должны быть положительными нечетными числами." << endl;
        return 1;
    }

    // Построение ромба
    int mid = height / 2; // Середина ромба
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Условия для печати символа
            if (j == mid - i || j == mid + i || j == i - mid || j == 3 * mid - i) {
                cout << symbol;
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}