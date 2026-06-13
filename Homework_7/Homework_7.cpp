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

	//  II
	cout << "\n\tII" << endl;
	// Написати функцію, що реалізує алгоритм бінарного пошуку заданого ключа в одновимірному масиві.

	const int size = 12;
	int arr[size];
	int min = 0, max = 24;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
	ascBubbleSort(arr, size);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int x;
	cout << "What do you need to find? ";
	cin >> x;
	cout<< "Index of " << x << ": " << binarySearch(arr, size, x) << endl;


	//  III
	cout << "\n\tIII" << endl;
	// Написати функцію для переведення числа, записаного в двійковому вигляді, в десяткове подання.




	return 0;
}
