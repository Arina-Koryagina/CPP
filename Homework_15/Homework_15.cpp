#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Func.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(White, Black);
	system("cls");
	srand(time(0));

	/*-------------------*/
	const int n = 5;
	Point points[n];
	int minValue = -5, maxValue = 20;
	for (int i = 0; i < n; i++)
	{
		points[i].name = 'A' + i;
		points[i].x = rand() % (maxValue - minValue + 1) + minValue;
		points[i].y = rand() % (maxValue - minValue + 1) + minValue;
	}
	for (int i = 0; i < n; i++)
	{
		printPoint(points[i]);
	}

	int ind[2] = {0, 1};
	double dist = getLen(points[0].x, points[0].y, points[1].x, points[1].y);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double len = getLen(points[i].x, points[i].y, points[j].x, points[j].y);
			if (len > dist)
			{
				dist = len;
				ind[0] = i;
				ind[1] = j;
			}
		}
	}
	
	cout << "Longest distance: " << dist << endl;
	printPoint(points[ind[0]]);
	printPoint(points[ind[1]]);
	/*-------------------*/


	//  I
	cout << "\n\tI" << endl;
	// Транспонування матриці — це операція, після якої стовпчики
	// попередньої матриці стають рядками, а рядки — стовпчиками.
	// Напишіть функцію транспонування матриці.

	int row = 3, col = 4;
	int** arr = nullptr;
	createArray(arr, row, col);
	setArray(arr);
	printArray(arr);
	transposeMatrix(arr);
	printArray(arr);


	//  II
	cout << "\n\tII" << endl;
	// Створіть динамічний масив, що зберігає в першому рядку ім'я,
	// а в другому — телефон. Організуйте пошук за ім'ям і за
	// номером телефону та можливість введення і зміни даних.

	int size = 3;
	const char** names = new const char* [size] {"Brian", "Gerard", "Billie"};
	int* numbers = new int[size];
	setArray(numbers, 10300000, 99999999);
	void** contacts = setList(names, numbers, size);
	printList(contacts, size);

	int op;
	do {
		cout << "0 - Sort (A-Z)\n1 - Sort (Z-A)\n2 - Add contact\n3 - Delete contact\n4 - Exit" << endl;
		cout << "What do you want to do? "; cin >> op;
		editList(contacts, size, op);
	} while (op != 4);

	
	return 0;
}