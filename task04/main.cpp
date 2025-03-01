/* 
Напишите программу , в которой по извесной начальной скорости V и времени полета тела T определяется угол aльфа под которым тело брошено по отношению к горизонту (воспользуйтесь соотношением a = arcsin(gT/2V) )
*/

#include <iostream>
#include <cmath>
 
int main()
{
double V, T, param, result;
const double Pi = asin(1.0), g = 9.8;
std::cout << " V = ";
std::cin >> V;
 
std::cout<< std::endl << " T = ";
std::cin >> T;
 
 if(1 < fabs(g*T/(2*V)))
        std::cout<<"Incorrect"<< std::endl;
    else
    {
        param = asin(g*T/(2*V));
        std::cout<<"Ugol = "<<param*(90/Pi)<<std::endl;
    }
 
system("PAUSE");
return 0;
}