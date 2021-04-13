// lab 6.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct three
{
	int Data;

	three* Left;
	three* Right;
	three* Middle;

	void Add(int aData, three*& aThree)
	{
		if (!aThree)
		{
			aThree = new three;
			aThree->Data = aData;
			aThree->Left = 0;
			aThree->Right = 0;
			aThree->Middle = 0;

			return;
		}
		else {
			if (aThree->Data > aData)
			{
				Add(aData, aThree->Left);
			}
			else if (aThree->Data < aData)
			{
				Add(aData, aThree->Right);
			}
			else if (aThree->Data == aData)
			{
				Add(aData, aThree->Middle);
			}
		}
	}

	void CheckEmpty(three*& aThree)
	{
		if (!aThree)
		{
			cout << "Дерево пустое ";
		}
		else
		{
			cout << "Дерево не пустое ";
		}
	}

	void Free(three* aThree)
	{
		if (!aThree) return;

		Free(aThree->Left);
		Free(aThree->Middle);
		Free(aThree->Right);

		delete aThree;

		return;
	}

	void Enter()
	{
		three* Root = 0;

		int size;
		int element;

		cout << "Введите число элементов дерева: ";
		cin >> size; cout << endl;

		for (int i = 1; i < size + 1; i++)
		{
			cout << "Введите " << i << " элемент: ";
			cin >> element;
			Add(element, Root);
		}

		cout << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "rus");

	three number;
	three* Root = 0;

	number.Enter();
	number.CheckEmpty(Root);
	number.Free(Root);

	return 0;
}