/*
С помощью цикла while разработать программу, которая будет вычислять сумму чисел нацело делящихся на 5. Цикл задать от 0 до введенного с клавиатуры числа.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int interval_numbers, // правая граница интервала чисел
        counter = 0; // левая граница интервала чисел
    setlocale(LC_ALL, "rus");
    std::cout << "Введите правую границу интервала чисел: ";
    std::cin >> interval_numbers;
 
    int sum_numbers = 0; // сумма чисел нацело делящихся на 5
    while ( counter <= interval_numbers )
    {
        if ( (counter % 5) == 0 )
         sum_numbers += counter;
     counter++;
    }
 
    std::cout << "Сумма чисел нацело делящихся на 5 = " << sum_numbers << std::endl;
    return 0;
}