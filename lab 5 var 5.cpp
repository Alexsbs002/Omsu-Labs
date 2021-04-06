// lab 4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//обратный порядок строки функция reverce - http://espressocode.top/stdreverse-in-c/ ; getline - http://espressocode.top/getline-string-c/

#include <iostream>
#include <cstdio>
#include <cstring> 
using namespace std;

int main()
{
	char begin[100];
	begin[99] = '\0';
	char end[100];
	cout << "Enter str: ";
	gets_s(begin);
	int len = strlen(begin);
	for (int i = 0, j = len - 1; i < len; i++, j--)
	{
		end[i] = begin[j];
	}
	end[len] = '\0';
	cout << "\n Reverce str = " << end;
    return 0;
}
