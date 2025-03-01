/*
Программа проверяет, является ли введенное с клавиатуры число — целым числом.
*/

#include <iostream>
 
int main(int argc, char* argv[])
{
    double number; // вводимое число
    setlocale(LC_ALL, "rus");
    std::cout << "Введите число и нажмите <Enter> -> ";
    std::cin >> number;
 
    if ( (number - int(number)) != 0 ) // если разность больше нуля, то введённое число - число с плавающей точкой
        std::cout << "\nВведённое число не является целым!" << std::endl;
    else
        std::cout << "Это целое число!\n";
    return 0;
}