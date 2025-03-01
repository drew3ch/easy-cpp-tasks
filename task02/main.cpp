/* 
Найти алгебраическую сумму для выражения: 1^k + 2^k + 3^k + … + N^k. N и степень k вводит пользователь.
*/

#include <iostream>
#include <cmath> // подключение библиотеки математических операций
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    std::cout << "Введите N: ";
    unsigned n, // последний элемент суммы
             k, // степень
             sum = 0; // алгебраическая сумма
    std::cin >> n;
    std::cout << "Введите степень к: ";
    std::cin >> k;
 
    for (int counter = 1; counter <= n; counter++)
        sum += pow(counter, (float)k); // накапливаем сумму, согласно формуле
    std::cout << "Сумма: " << sum << std::endl;
    system("pause");
    return 0;
}