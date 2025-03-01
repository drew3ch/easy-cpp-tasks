/*
Программа проверяет, является ли введенное с клавиатуры число — целым числом.
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    double number; // вводимое число
    setlocale(LC_ALL, "rus");
    cout << "Введите число и нажмите <Enter> -> ";
    cin >> number;
 
    if ( (number - int(number)) != 0 ) // если разность больше нуля, то введённое число - число с плавающей точкой
        cout << "\nВведённое число не является целым!" << endl;
    else
        cout << "Это целое число!\n";
    return 0;
}