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
	SetColor(Black, White);
	system("cls");

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
	cout << endl;

	bubbleSort(arr_1, size_1);
	SetColor(Green, White);
	printArray(arr_1, size_1);
	cout << endl;

	bubbleSort(arr_1, size_1, true);
	SetColor(Red, White);
	printArray(arr_1, size_1);
	cout << endl;

	SetColor(Black, White);


	//  II
	cout << "\n\tII" << endl;
	// Написати функцію, яка сортує першу половину масиву за спаданням,
	// а другу — за зростанням, використовуючи сортування простими вставками.

	const int size_2 = 10;
	int arr_2[size_2];
	setArray(arr_2, size_2, 1, 15);
	printArray(arr_2, size_2);
	cout << endl;

	bubbleSort(arr_2, size_2 / 2, true);
	insertionSort(arr_2, size_2, size_2 / 2);

	SetColor(Green, White);
	printArray(arr_2, size_2 / 2);
	SetColor(Red, White);
	printArray(arr_2, size_2, size_2 / 2);
	SetColor(Black, White);
	cout << endl;


	//  III
	cout << "\n\tIII" << endl;
	// У функцію передається масив випадкових чисел у діапазоні від -20 до +20.
	// Необхідно знайти позиції крайніх від'ємних елементів (найлівішого від'ємного елемента
	// і найправішого від'ємного елемента) і відсортувати елементи, що знаходяться між ними.

	const int size_3 = 20;
	int arr_3[size_3];
	setArray(arr_3, size_3, -20);
	printArray(arr_3, size_3);
	cout << endl;

	int lMin, rMin;
	lMin = findIndex(arr_3, size_3);
	rMin = findIndex(arr_3, size_3, false);
	bubbleSort(arr_3, rMin, false, lMin+1);

	for (int i = 0; i < size_3; i++)
	{
		if (i == lMin)
		{
			SetColor(Green, White);
		}
		else if (i == rMin)
		{
			SetColor(Red, White);
		}
		cout << arr_3[i] << " ";
		SetColor(Black, White);
	}
	cout << endl;


	return 0;
}