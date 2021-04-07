// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Мирко Александр СБС-002 ЛАБ 1 ВАР 5

#include <iostream>
#include <cmath>
using namespace std;
#define g 9.8066 //определение константы

double PositiveInt(string x) { // проверка на ввод положительного числа >=0
    double n;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin || n < 0)
        {
            if(!cin)
                {
                cout << "Enter The Number!\n"; 
                }
            if (n < 0)
                {
                cout << "Well done, now enter The Positive Number!\n";
                }
            
            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    return n;
}

int main()
{
    double H, U, T, S;
    
    H = PositiveInt("Enter Height of plane: ");
    U = PositiveInt("Enter speed of plane: ");

    //расчет
    T = sqrt(2 * H / g);
    S = U * T;


    //вывод
    cout << "S to drop the bomb from plane: "<< S;
    cout << "\n";
    system("pause");
    return 0;


}
