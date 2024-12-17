/* 
Напишите программу, которая позволяет пользователю ввести в консоль три координаты вектора x, y, и z, с основанием у начала координат.
Вычислите длину этого вектора и выведите её обратно в консоль.
*/

#include <iostream>
#include <locale>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "Russian");

	double dX(0.0), dY(0.0), dZ(0.0);
	double dVectorLength(0.0);

	cout << "\n Введите Х: ";
	cin >> dX;

	cout << "\n Введите Y: ";
	cin >> dY;

	cout << "\n Введите Z: ";
	cin >> dZ;

	cout << "\n Вы ввели следующие числа: X = " << dX << "; Y = " << dY << "; Z = " << dZ;

	dVectorLength = sqrt(pow(dX, 2) + pow(dY, 2) + pow(dZ, 2)); // вычисления модуля (длины) вектора

	cout << "\n Длина вектора: " << dVectorLength << ". \n\n\a";
	system("pause");
	return 0;
}