// Lab 2 mirko -5 var.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//вычисление логарифма

#include <iostream>
#include <cmath>

using namespace std;
#define end 100


double PositiveInt(string x) { // проверка на ввод положительного числа >=0
    double t;
    while (true)
    {
        cout << x;
        cin >> t;
        if (!cin || t >= 1 || t <= 0)
        {
            if (!cin){
                cout << "Enter The Number!\n";
            }
            if (t >= 1 || t <= 0){
                cout << "enter Number from -1 to 1!\n";
            }

            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    return t;
}

int main()
{
    double Result, delta, x;
    int n;
    Result = 0;
    cout << "Enter x from -1 to 1 =  ";
    x = PositiveInt("Enter X: ");
    
    for (n = 0; n<= end; n++) //расчет логарифма
    {
        delta = (pow(-1,n) * pow(x,(2*n+1))) / (2*n+1);
        Result = Result + delta;
    }

    cout << "result for (n = 0 --- 100) and x = " << x; cout << " is = " << Result; //вывод
    return 0;
    



}
