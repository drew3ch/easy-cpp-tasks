/* 
Напишите программу, в которой по извесной начальной скорости V и времени полета тела T определяется угол aльфа
под которым тело брошено по отношению к горизонту (воспользуйтесь соотношением a = arcsin(g*T/2*V) ). 
*/

#include <iostream>
#include <cmath>
 
int main()
{
setlocale(LC_ALL, "rus");
double V, T, param, result; // переменные 
const double Pi = asin(1.0), g = 9.8; // константы 
std::cout << "Введите начальную скорость V = ";
std::cin >> V;
 
std::cout<< std::endl << "Введите время полета тела T = ";
std::cin >> T;
 
 if(1 < fabs(g*T/(2*V))) // проверка условия (1 < модуля)
        std::cout<<"Incorrect"<< std::endl;
    else
    {
        param = asin(g*T/(2*V));
        std::cout<<"Угол = "<<param*(90/Pi)<<std::endl;
    }
 
system("PAUSE");
return 0;
}