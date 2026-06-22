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
	// Написати такі функції для роботи з динамічним масивом:
	// - Функція розподілу динамічної пам'яті.
	// - Функція ініціалізації динамічного масиву.
	// - Функція друку динамічного масиву.
	// - Функція видалення динамічного масиву.
	// - Функція додавання елемента в кінець масиву.
	// - Функція вставки елемента за вказаним індексом.
	// - Функція видалення елемента за вказаним індексом.

	//int m = 10;
	//int* a = nullptr;
	
	//a = createArray(m);
	//setArray(a, m);
	//printArray(a, m);
	//a = addValueArray(a, m, 99);
	//printArray(a, m);
	//a = addValueArray(a, m, 99, 3);
	//printArray(a, m);
	//a = delValueArray(a, m, 3);
	//printArray(a, m);
	//deleteArray(a);
	

	//  II
	cout << "\n\tII" << endl;
	// Написати функцію, яка отримує покажчик на динамічний масив і
	// його розмір. Функція повинна видалити з масиву всі прості числа
	// і повернути покажчик на новий динамічний масив.

	/*int size = 10;
	int* arr = new int[size];
	setArray(arr, size, 2, 30);
	printArray(arr, size);

	arr = delPrimeNumArray(arr, size);
	
	printArray(arr, size);*/


	//  III
	cout << "\n\tIII" << endl;
	// Написати функцію, яка отримує покажчик на статичний масив і
	// його розмір. Функція розподіляє додатні, від'ємні та нульові
	// елементи в окремі динамічні масиви.

	const int s = 10;
	int array[s];
	setArray(array, s, -20, 20);
	printArray(array, s);

	int s_fst = 0, s_snd = 0, s_trd = 0;
	int* fst = new int[s_fst];
	int* snd = new int[s_snd];
	int* trd = new int[s_trd];
	sortArray(array, s, fst, s_fst, snd, s_snd, trd, s_trd);

	printArray(fst, s_fst);
	printArray(snd, s_snd);
	printArray(trd, s_trd);

	return 0;
}