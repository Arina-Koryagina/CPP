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

	int** a = nullptr;
	int row_a = 4, col_a = 2;
	createArray(a, row_a, col_a);
	setArray(a);
	printArray(a);

	int** b = nullptr;
	int row_b = 2, col_b = 3;
	createArray(b, row_b, col_b);
	setArray(b);
	printArray(b);

	int** c = multiplyMatrix(a, b);


	return 0;
}