/*
Напишите программу, которая должна определить, пройдет ли кирпич в отверстие. Размеры отверстия (длина и высота) вводит пользователь. Тоже самое касается габаритов кирпича, пользователь вводит в программу значения длины, ширины и высоты кирпича.
*/

#include <iostream>

using namespace std;

int main() {
    // Переменные для размеров отверстия
    double holeLength, holeHeight;
    // Переменные для размеров кирпича
    double brickLength, brickWidth, brickHeight;

    // Ввод размеров отверстия
    cout << "Введите размеры отверстия (длина и высота): ";
    cin >> holeLength >> holeHeight;

    // Ввод размеров кирпича
    cout << "Введите размеры кирпича (длина, ширина и высота): ";
    cin >> brickLength >> brickWidth >> brickHeight;

    // Проверка, пройдет ли кирпич через отверстие
    bool canPass = ( (brickLength <= holeLength && brickHeight <= holeHeight) ||
                     (brickLength <= holeHeight && brickHeight <= holeLength) ||
                     (brickWidth <= holeLength && brickHeight <= holeHeight) ||
                     (brickWidth <= holeHeight && brickHeight <= holeLength) ||
                     (brickLength <= holeLength && brickWidth <= holeHeight) ||
                     (brickLength <= holeHeight && brickWidth <= holeLength) );

    // Вывод результата
    if (canPass) {
        cout << "Кирпич пройдет через отверстие." << endl;
    } else {
        cout << "Кирпич не пройдет через отверстие." << endl;
    }

    return 0;
}
