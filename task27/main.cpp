/*
Итак, у вас уже есть подсказка, нужно воспользоваться оператором цикла for. Чтобы красиво вывести на экран таблицу умножения, прочитайте статью о форматировании потока вывода в С++, она вам очень поможет. 
*/

#include <iostream>

int main()
{
    setlocale (LC_ALL, "RUS");
    int chislo;
    cout<<"\t\t\tТаблица умножения введенного числа\n";
    cout<<"\t\t\t----------------------------------\n";
    cout<<std::endl;
    cout<<"Введите число:  ";
    cin>>chislo;
    cout<<std::endl;
    for (int j=1; j<=10; j++)
    {
        cout<<j<<" * "<<chislo<<" = "<<j*chislo<<std::endl;
 
    }
    cout<<std::endl;
 return 0;
}