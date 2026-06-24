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

	// Написати програму, яка містить функцію Action, що приймає як аргумент
	// покажчики на два масиви (А і В) і розміри масивів, а також покажчик на функцію.
	// Користувачеві відображається меню, в якому він може вибрати max, min, avg. 
	// Якщо обрано max, передається покажчик на функцію, яка шукає максимум; 
	// якщо обрано min, передається покажчик на функцію, яка шукає мінімум; 
	// якщо обрано avg, передається покажчик на функцію, яка шукає середнє.
	// Повернуте значення функції Action — результат вибору користувача max, min, avg.

	int m = 10, n = 10, op;
	int* a = new int[m];
	setArray(a, m);
	printArray(a, m);
	int* b = new int[n];
	setArray(b, n);
	printArray(b, n);

	int(*Action[])(int*, int, int*, int) = { getMax, getMin, getAvg };
	cout << "1 - max\n2 - min\n3 - avg" << endl;
	cin >> op;
	
	cout << Action[op - 1](a, m, b, n) << endl;
	

	return 0;
}