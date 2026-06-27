#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Func.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	SetColor(Black, White);
	system("cls");
	srand(time(0));

	int** a = nullptr;
	int row_a = 4, col_a = 2;
	createArray(a, row_a, col_a);
	setArray(a);
	SetColor(Red, White);
	printArray(a);

	int** b = nullptr;
	int row_b = 2, col_b = 3;
	createArray(b, row_b, col_b);
	setArray(b);
	SetColor(Blue, White);
	printArray(b);

	int** c = multiplyMatrix(a, b);
	SetColor(Green, White);
	printArray(c);
	SetColor(Black, White);


	return 0;
}