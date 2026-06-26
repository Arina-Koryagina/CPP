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


	//  I
	cout << "\tI" << endl;
	// Написати функцію, що додає стовпчик двовимірному масиву в зазначену позицію.

	int row = 3, col = 4;
	int** p = nullptr;
	createArray(p, row, col);
	setArray(p, row, col);
	printArray(p);

	int* t = new int[row];
	setArray(t, row);
	addColArray(p, row, col, 2, t);
	printArray(p);


	//  II
	cout << "\tII" << endl;
	// Написати функцію, що видаляє стовпчик двовимірного масиву за вказаним номером.

	printArray(p);
	delColArray(p, row, col, 3);
	printArray(p);
	deleteArray(p);


	//  III
	cout << "\tIII" << endl;
	// Дано матрицю порядку MxN (M рядків, N стовпців). Необхідно заповнити її значеннями
	// і написати функцію, що здійснює циклічний зсув рядків та/або стовпчиків масиву
	// вказану кількість разів і в зазначену сторону.

	int M = 3, N = 4;
	int** arr = nullptr;
	createArray(arr, M, N);
	setArray(arr, M, N);
	printArray(arr);

	int choice;
	cout << "0 - row\n1 - col\n2 - both" << endl;
	cout << "Choose the shift: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		shiftRowArray(arr, M, N);
		break;
	case 1:
		shiftColArray(arr, M, N);
		break;
	case 2:
		shiftRowArray(arr, M, N);
		shiftColArray(arr, M, N);
		break;
	default:
		break;
	}
	printArray(arr);


	return 0;
}