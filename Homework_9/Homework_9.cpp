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

	/*--------------*/
	int size;
	cout << "Size: ";
	cin >> size;
	int* p = new int[size];
	setArray(p, size);
	printArray(p, size);

	p = addValueArray(p, &size, 999);
	printArray(p, size);

	p = delValueArray(p, &size);
	printArray(p, size);
	cout << endl;
	/*--------------*/


	//  I
	cout << "\tI" << endl;
	// Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
	// Необхідно створити третій масив мінімально можливого розміру,
	// у якому потрібно зібрати елементи масиву A,
	// що не включаються в масив B, без повторень.

	int M_1, N_1;
	cout << "M: ";
	cin >> M_1;
	int* A = new int[M_1];
	setArray(A, M_1);
	SetColor(Blue, Black);
	cout << "A: ";
	printArray(A, M_1);
	SetColor(White, Black);
	cout << "N: ";
	cin >> N_1;
	int* B = new int[N_1];
	setArray(B, N_1);
	SetColor(Red, Black);
	cout << "B: ";
	printArray(B, N_1);

	int size_1 = 0;
	int* C = newUniqueArray(A, B, M_1, N_1, &size_1);

	SetColor(Green, Black);
	cout << "C: ";
	printArray(C, size_1);
	SetColor(White, Black);
	delete[] A;
	delete[] B;
	delete[] C;


	//  II
	cout << "\n\tII" << endl;
	// Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
	// Необхідно створити третій масив мінімально можливого розміру,
	// в якому потрібно зібрати елементи масивів A і B,
	// які не є спільними для них, без повторень.

	int M_2, N_2;
	cout << "M: ";
	cin >> M_2;
	A = new int[M_2];
	setArray(A, M_2);
	SetColor(Blue, Black);
	cout << "A: ";
	printArray(A, M_2);
	SetColor(White, Black);
	cout << "N: ";
	cin >> N_2;
	B = new int[N_2];
	setArray(B, N_2);
	SetColor(Red, Black);
	cout << "B: ";
	printArray(B, N_2);

	int size_2 = 0;
	C = newCompletelyUniqueArray(A, B, M_2, N_2, &size_2);

	SetColor(Green, Black);
	cout << "C: ";
	printArray(C, size_2);
	SetColor(White, Black);
	delete[] A;
	delete[] B;
	delete[] C;


	return 0;
}