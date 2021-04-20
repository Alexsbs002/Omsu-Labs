#include <iostream>
#include <cmath>
using namespace std;

class sinClass {

public:
    int x;
    int max;
    int n;
    double y;

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

    double sin(int x, int max)
    {
        cout << "you enter x = " << x << endl;
        cout << "you enter max = " << max << endl;
        double y = 0; 
        for (int n = 0; n <= max; n++)
        {
            double resUP = pow(x, (2 * n) + 1);//вычисление числителя

            double resDOWN = 1; 
            for (int d = 1; d <= 2 * n + 1; d++)
            {
                resDOWN = resDOWN * d;//вычисление знаменателя
            }

            y = y + resUP / resDOWN;//сумма значений
            

        }

        cout << endl << "результат вычислений косинуса = " << y << endl;

        return y;
    }
};



int main()
{
    setlocale(LC_ALL, "Russian");
    sinClass number;
    cout << "введите целое число x - ";
    number.x = number.EnterCheck();
    cout << "введите целое число границы ряда - ";
    number.max = number.EnterCheck();
    
    number.sin(number.x, number.max); 
    return 0;

}
