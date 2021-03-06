// lab 6.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

struct three
{
	int Data;
	three* LeftThree;
	three* RightThree;
	three* MiddleThree;


	void Add(int aData, three*& aThree)
	{
		if (!aThree)
		{
			aThree = new three;
			aThree->Data = aData;
			aThree->LeftThree = 0;
			aThree->RightThree = 0;
			aThree->MiddleThree = 0;
			return;
		}
		else {
			if (aThree->Data > aData)
			{
				Add(aData, aThree->LeftThree);
				
			}
			else if (aThree->Data < aData)
			{
				Add(aData, aThree->RightThree);
				
			}
			else if (aThree->Data == aData)
			{
				Add(aData, aThree->MiddleThree);
				
			}
		}
	}

	void is_Empty(three*& aThree)
	{
		if (!aThree)
		{
			cout << "Дерево пустое";
		}
		else
		{
			cout << "Дерево не пустое";
		}
	}

	void FreeTree(three* aThree)
	{
		if (!aThree) return;
		FreeTree(aThree->LeftThree);
		FreeTree(aThree->MiddleThree);
		FreeTree(aThree->RightThree);
		delete aThree;
		return;
	}

};


int main()
{
	setlocale(LC_ALL, "rus");
	three* Root = 0;
	three number;
	int size;
	int element;

	cout << "Введите кол-во уровней для будущего дерева: ";
	cin >> size;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int e = 0; e < pow(3,i); e++)
		{ 
		cout << "Введите " << e + 1 << " элемент " << i+1 << " уровня дерева: ";
		cin >> element;
		number.Add(element, Root);
		}
		cout << endl;
	}
	cout << endl;
	number.is_Empty(Root);
	number.FreeTree(Root);
	return 0;
}
