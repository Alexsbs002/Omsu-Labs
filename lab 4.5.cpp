// lab 4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int EnterCheck() {
    int n = 0;
    while (true)
    {
        if (!(cin >> n)) 
        {
            cout << "Введите еще раз\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "введите границу ряда \n";
    int max = EnterCheck();

    cout << "введите число x \n";
    int x = EnterCheck();

    double y = 0;
    for (int n = 0; n <= max; n++)
    {
        double resUP = pow(x, 2 * n);//вычисление числителя

        double resDOWN = 1;
            for (int d = 1; d <= 2 * n; d++)
            {
                resDOWN = resDOWN * d;//вычисление знаменателя
            }

        y = y + resUP / resDOWN;//сумма значений

    }

    cout << "\n" << "результат вычислений косинуса = " << y;
    return 0;
}
