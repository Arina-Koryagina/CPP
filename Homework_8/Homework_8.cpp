#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"Func.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	srand(time(0));

	//  I
	cout << "\tI" << endl;
	// Дано масив чисел розмірністю 10 елементів. Написати функцію, яка
	// сортує масив за зростанням або за спаданням, залежно від третього
	// параметра функції. Якщо він дорівнює true, сортування йде за спаданням,
	// якщо false — за зростанням. Перші 2 параметри функції — це масив
	// і його розмір, третій параметр за замовчуванням дорівнює false.

	const int size_1 = 10;
	int arr_1[size_1];
	setArray(arr_1, size_1);
	printArray(arr_1, size_1);

	bubbleSort(arr_1, size_1, true);

	printArray(arr_1, size_1);


	//  II
	cout << "\n\tII" << endl;
	// Написати функцію, яка сортує першу половину масиву за спаданням,
	// а другу — за зростанням, використовуючи сортування простими вставками.


	//const int size_2 = 10;
	//int arr_2[size_2];
	//setArray(arr_2, size_2);
	//printArray(arr_2, size_2);




	//  II
	cout << "\n\tII" << endl;
	// У функцію передається масив випадкових чисел у діапазоні від -20 до +20.
	// Необхідно знайти позиції крайніх від'ємних елементів (найлівішого від'ємного елемента
	// і найправішого від'ємного елемента) і відсортувати елементи, що знаходяться між ними.

	//const int size_3 = 20;
	//int arr_3[size_3];
	//setArray(arr_3, size_3, -20);
	//printArray(arr_3, size_3);


	return 0;
}