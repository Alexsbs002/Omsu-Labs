#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>
using namespace std;

double CorrectNumber() { // проверка ввода
    double n;
    while (true)
    {
        cin >> n;
        if (!cin)
        {
            cout << "Ошибка ввода - введите число!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    return n;
}

int CorrectNumber02() { // проверка ввода
    int n;
    while (true)
    {
        cin >> n;
        if (!cin || n!=0 && n!=1 )
        {
            if (!cin){
            cout << "Ошибка ввода - введите число!\n";
            cin.clear();
            while (cin.get() != '\n');
            }
            if (n != 0 && n != 1) {
                cout << "Ошибка ввода - введите число 0 или 1 !\n";
                cin.clear();
                while (cin.get() != '\n');
            }
        }
        else {
            break;
        }
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // русский язык
    int n = 3; int w = -1;
    
    cout << "Введите 0 для ручного заполнения массива и 1 для автоматического - ";
    w = CorrectNumber02();
    double a[3][3];
    if (w == 0) // ввод с руки
    {

        for (int i = 0; i < n; i++) { // ввод элементов руками

            for (int j = 0; j < n; j++) {
                cout << "Введите действительное число a" << i + 1 << j + 1 << ": ";
                a[i][j] = CorrectNumber();
            }
        }

    }
    else { // ввод автоматически
        srand(time(0)); int f;
        cout << "Введите диапозон значений генерации - ";
        f = CorrectNumber(); // ввод диапозона
        for (int i = 0; i < n; i++) { // ввод элементов автомат
            for (int j = 0; j < n; j++) {
                a[i][j] = rand() % f - (f/2);
            }
        }
    }
    cout << "Ваша матрица: \n\n ";
    
    
    for (int i = 0; i < n; i++) {//вывод массива

        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n Определитель матрицы равен: ";//расчет определителя
    double det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    cout << det;
}
