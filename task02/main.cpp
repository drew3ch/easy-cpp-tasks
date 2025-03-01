/* 
Найти алгебраическую сумму для выражения: 1^k + 2^k + 3^k + … + N^k. N и степень k вводит пользователь.
*/

#include <iostream>
#include <cmath> // подключение библиотеки математических операций

using namespace std;
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    cout << "Введите N: ";
    unsigned n, // последний элемент суммы
             k, // степень
             sum = 0; // алгебраическая сумма
    cin >> n;
    cout << "Введите степень к: ";
    cin >> k;
 
    for (int counter = 1; counter <= n; counter++)
        sum += pow(counter, (float)k); // накапливаем сумму, согласно формуле
    cout << "Сумма: " << sum << endl;
    system("pause");
    return 0;
}