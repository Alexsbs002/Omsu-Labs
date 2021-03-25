// lab 4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int EnterCheck(string x) { 
    int n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin)
        {
            cout << "Введите еще раз\n";
            cin.clear();
        }
        else break;
    }
    return n;
}

int Primer(x,end){
    double y = 0;
    int factMaxNumber = 2, degree = 2;
    for (int n = 0; n < end; n++) {
        double fact = 1;
            for (int n = 1; n <= factMaxNumber; n++) {
                fact = fact * n;
            }
            factMaxNumber = factMaxNumber + 2;
        y = y + (pow(x, degree) / fact);
        degree = degree + 2;
    }
    double res = y + 1;
    cout << "\n" << "Гиперболический косинус x с границей ряда " << end << " = " << res;
    return res;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = EnterCheck("Введите x: ");
    int end = EnterCheck("Введите границу ряда: ");
    Primer(x,end);
    
    
    return 0;
}
