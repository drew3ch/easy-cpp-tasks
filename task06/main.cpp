/* 
Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры.
Возведение в степень организовать с использованием циклов.
*/

#include <iostream>
#include <cmath>
 
int main()
{
    setlocale(LC_ALL, "rus");
    int result = 1, p, y; // число y и степень p
    std::cout << "Enter number:" << std::endl;
    std::cin >> y;
    std::cout << "Enter power:" << std::endl;
    std::cin >> p;
    for (int i = 0; i < p; i++) {
        result *= y;
    }
    std::cout << result << std::endl;
    system("pause");
    return 0;
}