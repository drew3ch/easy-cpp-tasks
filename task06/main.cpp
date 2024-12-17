/* 
Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры.
Возведение в степень организовать с использованием циклов.
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "rus");
    int result = 1, p, y; // число y и степень p
    cout << "Enter number:" << endl;
    cin >> y;
    cout << "Enter power:" << endl;
    cin >> p;
    for (int i = 0; i < p; i++) {
        result *= y;
    }
    cout << result << endl;
    system("pause");
    return 0;
}