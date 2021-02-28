// Lab 2 mirko -5 var.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//вычисление логарифма

#include <iostream>
#include <cmath>

using namespace std;
#define end 100

int main()
{
    double Result, delta, x;
    int n;
    Result = 0; x = 10.0;
    cout << "Enter x from -1 to 1 =  ";
    while (x <= -1, x >= 1) //проверка ввода значений
    {
        
        cin >> x;
        if (x <= -1, x >= 1)
        {
            cout << "PLEACE enter x FROM -1 to 1 =  ";
        }
        
    }
    
    cout << "you enter x = " << x; // вывод введенного x
    cout << "\n";
    for (n = 0; n<= end; n++) //расчет логарифма
    {
        delta = (pow(-1,n) * pow(x,(2*n+1))) / (2*n+1);
        Result = Result + delta;
    }

    cout << "result for (n = 0 --- 100) and x = " << x; cout << " is = " << Result; //вывод
    return 0;
    



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
