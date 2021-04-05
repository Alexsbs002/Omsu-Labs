// lab 4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//обратный порядок строки функция reverce - http://espressocode.top/stdreverse-in-c/ - http://espressocode.top/getline-string-c/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    

    string str;
    cout << "Enter the string: ";
    getline(cin, str);//чтение строки из потока

    reverse(str.begin(), str.end());
    //меняет порядок элементов в заданном диапозоне, можно писать begin->begin()+2
    cout << "your string, but it reverced: " << str << endl;
    
    return 0;
}
